#include <bits/stdc++.h>
#define pii pair<int,int>
using namespace std;

int n,m,rem,dx[4]={0,1,0,-1},dy[4]={1,0,-1,0},ch,t;
bool board[100][100],visited[100][100],flag;
vector<pii> soon;

void bfs(int a, int b) {
    queue<pii> q;
    q.push({a,b});
    visited[a][b]=1;
    while (!q.empty()) {
        auto [x,y] = q.front();
        q.pop();
        for (int i=0; i<4; i++) {
            int cx=x+dx[i],cy=y+dy[i];
            if (cx<0 || cy<0 || cx>=n || cy>=m || visited[cx][cy] || board[cx][cy]) continue;
            q.push({cx,cy});
            visited[cx][cy]=1;
        }
    }
}

void melt(int a, int b) {
    int cnt=0;
    for (int i=0; i<4; i++) {
        int cx=a+dx[i],cy=b+dy[i];
        if (cx<0 || cy<0 || cx>=n || cy>=m) continue;
        if (!board[cx][cy] && visited[cx][cy]) cnt++;
    }
    if (cnt) soon.push_back({a,b});
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> m;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin >> board[i][j];
            if (board[i][j]) ch++;
        }
    }

    while (true) {
        t++;
        fill(&visited[0][0],&visited[100][0],0);
        soon.clear();
        bfs(0,0); // 외부 공간 방문
        for (int i=1; i<n-1; i++) {
            for (int j=1; j<m-1; j++) {
                if (board[i][j]) melt(i,j);
            }
        }
        for (auto [x,y] : soon) board[x][y]=0;
        if (ch-soon.size()==0) {
            cout << t << '\n' << ch;
            break;
        }
        ch -= soon.size();
    }
}