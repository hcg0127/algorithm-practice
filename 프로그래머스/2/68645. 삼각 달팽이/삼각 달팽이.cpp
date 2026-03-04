#include <bits/stdc++.h>

using namespace std;

int dx[3]={1,0,-1}, dy[3]={0,1,-1}, board[1001][1001], d=0;

vector<int> solution(int n) {
    vector<int> answer;
    int tmp = 0, mx = 0, a = 0, b = 0;
    for (int i=1; i<=n; i++) mx += i;
    while (tmp<mx) {
        tmp++;
        board[a][b] = tmp;
        int ca = a+dx[d], cb = b+dy[d];
        if (ca<0 || cb<0 || ca>=n || cb>=n || board[ca][cb]) {
            d = (d+1)%3;
        }
        a += dx[d];
        b += dy[d];
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<=i; j++) answer.push_back(board[i][j]);
    }
    return answer;
}