#include <bits/stdc++.h>
using namespace std;

int r,c,dx[4]={0,1,0,-1},dy[4]={1,0,-1,0},mx=0;
string str;
char board[20][20];
bool visited[26];

void dfs(int x, int y, int d) {
    mx=max(mx,d);
    for (int i=0; i<4; i++) {
        int cx=x+dx[i],cy=y+dy[i];
        if (cx<0 || cy<0 || cx>=r || cy>=c || visited[board[cx][cy]-'A']) continue;
        visited[board[cx][cy]-'A']=1;
        dfs(cx,cy,d+1);
        visited[board[cx][cy]-'A']=0;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> r >> c;
    for (int i=0; i<r; i++) {
        cin >> str;
        for (int j=0; j<c; j++) {
            board[i][j] = str[j];
        }
    }

    visited[board[0][0]-'A']=1;
    dfs(0,0,1);
    cout << mx;
}