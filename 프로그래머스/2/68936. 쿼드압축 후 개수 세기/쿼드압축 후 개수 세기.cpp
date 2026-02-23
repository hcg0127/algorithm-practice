#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> board;
vector<int> ans(2,0);

void qd(int a, int b, int x) {
    if (x==1) {
        board[a][b] ? ans[1]++ : ans[0]++;
        return;
    }
    int z = 0, o = 0;
    for (int i=a; i<a+x; i++) {
        for (int j=b; j<b+x; j++) {
            board[i][j] ? o++ : z++;
        }
    }
    if (o==x*x) ans[1]++;
    else if (z==x*x) ans[0]++;
    else {
        qd(a,b,x/2);
        qd(a,b+x/2,x/2);
        qd(a+x/2,b,x/2);
        qd(a+x/2,b+x/2,x/2);
    }
}

vector<int> solution(vector<vector<int>> arr) {
    board = arr;
    qd(0,0,arr.size());
    return ans;
}