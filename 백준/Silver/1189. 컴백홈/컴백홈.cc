#include <bits/stdc++.h>
using namespace std;

int r,c,k,ans,dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};
string str;
bool board[5][5],visited[5][5];

void dfs(int x, int y, int dep) {
    if (x==0 && y==c-1) {
        if (dep==k) ans++;
        return;
    }
    for (int i=0; i<4; i++) {
        int cx=x+dx[i],cy=y+dy[i];
        if (cx<0 || cy<0 || cx>=r || cy>=c || board[cx][cy] || visited[cx][cy]) continue;
        visited[cx][cy]=1;
        dfs(cx,cy,dep+1);
        visited[cx][cy]=0;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> r >> c >> k;
    for (int i=0; i<r; i++) {
        cin >> str;
        for (int j=0; j<c; j++) board[i][j] = (str[j]=='T' ? 1 : 0);
    }

    visited[r-1][0]=1;
    dfs(r-1,0,1);
    cout << ans;
}