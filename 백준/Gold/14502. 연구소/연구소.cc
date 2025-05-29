#include <bits/stdc++.h>
#define pii pair<int,int>
using namespace std;

int n,m,board[8][8],vs,ans,dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};
vector<pii> blank;
bool visited[8][8];

int bfs(int a, int b) {
    queue<pii> q;
    q.push({a,b});
    visited[a][b]=1;
    int cnt=1;
    bool flag=0;
    while (!q.empty()) {
        auto [x,y] = q.front();
        q.pop();
        for (int i=0; i<4; i++) {
            int cx=x+dx[i],cy=y+dy[i];
            if (cx<0 || cy<0 || cx>=n || cy>=m || visited[cx][cy] || board[cx][cy]==1) continue;
            if (board[cx][cy]==2) flag=1;
            q.push({cx,cy});
            visited[cx][cy]=1;
            cnt++;
        }
    }
    return flag ? 0 : cnt;
}

void wall(int x, int d) {
    if (d==3) {
        fill(&visited[0][0],&visited[8][0],0);
        int temp=0;
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                if (!board[i][j] && !visited[i][j]) temp += bfs(i,j);
            }
        }
        ans = max(temp,ans);
        return;
    }
    for (int i=x; i<vs; i++) {
        auto [a,b] = blank[i];
        board[a][b] = 1;
        wall(i+1,d+1);
        board[a][b] = 0;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> m;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin >> board[i][j];
            if (!board[i][j]) blank.push_back({i,j});
        }
    }

    vs = blank.size();
    wall(0,0);
    cout << ans;
}