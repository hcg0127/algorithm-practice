#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> query) {
    vector<int> answer = arr;
    bool flag = 0;
    for (auto q : query) {
        if (!flag) {
            answer = vector<int>(answer.begin(),answer.begin()+q+1);
        } else {
            answer = vector<int>(answer.begin()+q,answer.end());
        }
        flag = !flag;
    }
    return answer;
}