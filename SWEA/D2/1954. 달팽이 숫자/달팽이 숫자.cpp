#include <bits/stdc++.h>
using namespace std;

void sn(int n) {
    int board[n][n], r=0, c=0, d=0, dx[4]={0,1,0,-1}, dy[4]={1,0,-1,0}, cnt=n*n;
    fill(&board[0][0], &board[n][0], -1);
    for (int i=1; i<=cnt; i++) {
        board[r][c] = i;
        int nr = r+dx[d], nc = c+dy[d];
        if (nr<0 || nc<0 || nr>=n || nc>=n || board[nr][nc]!=-1) d = (d+1)%4;
        r += dx[d];
        c += dy[d];
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout << board[i][j] << ' ';
        }
        cout << '\n';
    }
}

int main() {
    int t;
    cin >> t;
    
    for (int i=1; i<=t; i++) {
        int n;
        cin >> n;
        
        cout << "#" << i << '\n';
        sn(n);
    }
}