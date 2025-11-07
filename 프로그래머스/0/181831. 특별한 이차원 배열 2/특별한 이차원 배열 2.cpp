#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> arr) {
    int vs = arr.size();
    bool flag = 1;
    for (int i=0; i<vs; i++) {
        for (int j=0; j<vs; j++) {
            if (arr[i][j]!=arr[j][i]) {
                flag = 0;
                break;
            }
        }
        if (!flag) break;
    }
    return flag;
}