#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> intervals) {
    vector<int> answer;
    for (auto iv : intervals) {
        for (int i=iv[0]; i<=iv[1]; i++) answer.push_back(arr[i]);
    }
    return answer;
}