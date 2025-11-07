#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, int k) {
    int answer = 0, rs = board.size(), cs = board[0].size();
    for (int i=0; i<rs; i++) {
        for (int j=0; j<cs; j++) if (i+j<=k) answer += board[i][j];
    }
    return answer;
}