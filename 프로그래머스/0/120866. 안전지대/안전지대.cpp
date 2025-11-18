#include <string>
#include <vector>

using namespace std;
int dx[8]={0,0,1,1,1,-1,-1,-1}, dy[8]={1,-1,-1,0,1,-1,0,1}, x, y;

int solution(vector<vector<int>> board) {
    int answer = 0, n = board.size();
    for (int x=0; x<n; x++) {
        for (int y=0; y<n; y++) {
            if (board[x][y]==1) continue;
            bool flag = 1;
            for (int i=0; i<8; i++) {
                int cx=x+dx[i], cy=y+dy[i];
                if (cx<0 || cy<0 || cx>=n || cy>=n) continue;
                if (board[cx][cy]==1) {
                    flag = 0;
                    break;
                }
            }
            if (flag) answer++;
        }
    }
    return answer;
}