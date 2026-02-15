#include <bits/stdc++.h>
using namespace std;

int board[100001][4];

int solution(vector<vector<int> > land)
{
    int x=land.size();
    for (int i=0; i<4; i++) board[0][i] = land[0][i];

    for (int i=1; i<x; i++) {
        for (int j=0; j<4; j++) {
            board[i][j] = max({board[i-1][(j+1)%4],board[i-1][(j+2)%4],board[i-1][(j+3)%4]}) + land[i][j];
        }
    }

    return max({board[x-1][0],board[x-1][1],board[x-1][2],board[x-1][3]});
}