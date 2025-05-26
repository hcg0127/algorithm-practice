#include <bits/stdc++.h>
#define pii pair<int,int>
using namespace std;

int t,n,m,k,x,y,dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};
bool board[50][50],visited[50][50];

void bfs(int a, int b) {
    queue<pii> q;
    q.push({a,b});
    visited[a][b]=1;
    while (!q.empty()) {
        auto [x,y] = q.front();
        q.pop();
        for (int i=0; i<4; i++) {
            int cx=x+dx[i],cy=y+dy[i];
            if (cx<0 || cy<0 || cx>=n || cy>=m || visited[cx][cy] || !board[cx][cy]) continue;
            q.push({cx,cy});
            visited[cx][cy]=1;
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> t;
    while (t--) {
        cin >> n >> m >> k;
        for (int i=0; i<k; i++) {
            cin >> x >> y;
            board[x][y] = 1;
        }
        int cnt = 0;
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                if (board[i][j] && !visited[i][j]) {
                    bfs(i,j);
                    cnt++;
                }
            }
        }
        cout << cnt << '\n';
        fill(&board[0][0],&board[n][0],0);
        fill(&visited[0][0],&visited[n][0],0);
    }
}