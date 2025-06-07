#include <bits/stdc++.h>
#define pii pair<int,int>
using namespace std;

int n,m,ans,dx[4]={0,1,0,-1},dy[4]={1,0,-1,0},jx,jy,sx,sy;
string str;
bool board[300][300],visited[300][300];
queue<pii> q,nq;

bool bfs() {
    ans++;
    nq = queue<pii>();
    while (!q.empty()) {
        auto [x,y] = q.front();
        q.pop();
        for (int i=0; i<4; i++) {
            int cx=x+dx[i],cy=y+dy[i];
            if (cx<0 || cy<0 || cx>=n || cy>=m || visited[cx][cy]) continue;
            if (cx==sx-1 && cy==sy-1) return true;
            visited[cx][cy]=1;
            if (board[cx][cy]) {
                nq.push({cx,cy});
                board[cx][cy]=0;
            } else q.push({cx,cy});
        }
    }
    q = nq;
    return false;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> m >> jx >> jy >> sx >> sy;
    for (int i=0; i<n; i++) {
        cin >> str;
        for (int j=0; j<m; j++) if (str[j]=='1') board[i][j]=1;
    }

    q.push({jx-1,jy-1});
    visited[jx-1][jy-1]=1;
    while (true) {
        if (bfs()) break;
    }
    cout << ans;
}