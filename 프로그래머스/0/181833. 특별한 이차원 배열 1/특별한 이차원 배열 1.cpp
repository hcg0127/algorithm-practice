#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer;
    for (int i=0; i<n; i++) {
        vector<int> tmp;
        for (int j=0; j<n; j++) {
            tmp.push_back(i==j ? 1 : 0);
        }
        answer.push_back(tmp);
    }
    return answer;
}