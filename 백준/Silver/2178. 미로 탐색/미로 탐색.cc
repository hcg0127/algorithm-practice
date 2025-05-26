#include <bits/stdc++.h>
#define pii pair<int,int>
using namespace std;

int n,m,board[100][100],dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};
bool visited[100][100];
string str;

void bfs() {
    queue<pii> q;
    q.push({0,0});
    visited[0][0] = 1;
    while (!q.empty()) {
        auto [x,y] = q.front();
        q.pop();
        for (int i=0; i<4; i++) {
            int cx=x+dx[i],cy=y+dy[i];
            if (cx<0 || cy<0 || cx>=n || cy>=m || board[cx][cy]==0 || visited[cx][cy]) continue;
            board[cx][cy] = board[x][y] + 1;
            visited[cx][cy] = 1;
            q.push({cx,cy});
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> m;
    for (int i=0; i<n; i++) {
        cin >> str;
        for (int j=0; j<m; j++)
            board[i][j] = (str[j]=='1' ? 1 : 0);
    }

    bfs();
    cout << board[n-1][m-1];
}