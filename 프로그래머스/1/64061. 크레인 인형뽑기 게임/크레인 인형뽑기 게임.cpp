#include <bits/stdc++.h>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0, r = board.size();
    stack<int> s;
    for (auto m : moves) {
        for (int i=0; i<r; i++) {
            int num = board[i][m-1];
            if (num!=0) {
                if (!s.empty() && s.top()==num) {
                    s.pop();
                    answer+=2;
                } else {
                    s.push(num);
                }
                board[i][m-1] = 0;
                break;
            }
        }
    }
    return answer;
}