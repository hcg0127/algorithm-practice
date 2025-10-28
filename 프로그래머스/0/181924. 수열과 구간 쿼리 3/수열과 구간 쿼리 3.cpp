#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer = arr;
    for (auto q : queries) {
        int a = q[0], b = q[1];
        swap(answer[a],answer[b]);
    }
    return answer;
}