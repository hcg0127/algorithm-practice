#include <bits/stdc++.h>

using namespace std;

int solution(vector<vector<string>> board, int h, int w) {
    int ans=0,n=board.size(),dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
    for (int i=0; i<4; i++) {
        int cx=h+dx[i],cy=w+dy[i];
        if (cx<0 || cx>=n || cy<0 || cy>=n) continue;
        if (board[h][w]==board[cx][cy]) ans++;
    }
    return ans;
}