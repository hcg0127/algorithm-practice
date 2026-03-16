#include <bits/stdc++.h>

using namespace std;

int n,m,board[101][101],dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};
vector<int> answer;

void move(vector<int> v) {
    int sl=v[0]-1, sr=v[1]-1, el=v[2]-1, er=v[3]-1, num = 10001, x = sl, y = sr, d = 0, tmp = board[sl][sr], last = board[sl][sr];
    vector<int> arr;
    while (1) {
        int cx=x+dx[d], cy=y+dy[d];
        num = min(num,last);
        if (cx<sl || cx>el || cy<sr || cy>er) {
            d = (d+1)%4;
            cx=x+dx[d],cy=y+dy[d];
        }
        tmp = board[cx][cy];
        board[cx][cy] = last;
        last = tmp;
        x=cx, y=cy;
        if (x==sl && y==sr) break;
    }
    answer.push_back(num);
}

vector<int> solution(int rows, int columns, vector<vector<int>> queries) {
    n = rows, m = columns;
    int num = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            board[i][j] = ++num;
        }
    }
    
    for (auto v : queries) {
        move(v);
    }
    return answer;
}