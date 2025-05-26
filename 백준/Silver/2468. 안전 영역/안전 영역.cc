#include <bits/stdc++.h>
#define pii pair<int,int>
using namespace std;

int n,board[100][100],dx[4]={0,1,0,-1},dy[4]={1,0,-1,0},ans;
bool visited[100][100];

void bfs(int a, int b, int h) {
    queue<pii> q;
    q.push({a,b});
    visited[a][b]=1;
    while (!q.empty()) {
        auto [x,y] = q.front();
        q.pop();
        for (int i=0; i<4; i++) {
            int cx=x+dx[i],cy=y+dy[i];
            if (cx<0 || cy<0 || cx>=n || cy>=n || visited[cx][cy] || board[cx][cy]<=h) continue;
            q.push({cx,cy});
            visited[cx][cy]=1;
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) cin >> board[i][j];
    }

    for (int h=0; h<=100; h++) {
        int cnt=0;
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                if (!visited[i][j] && board[i][j]>h) {
                    bfs(i,j,h);
                    cnt++;
                }
            }
        }
        ans = max(cnt,ans);
        fill(&visited[0][0],&visited[n][0],0);
    }

    cout << ans;
}