#include <algorithm>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    sort(arr.begin(),arr.end());
    for (auto i : arr) if (!(i%divisor)) answer.push_back(i);
    if (answer.empty()) answer.push_back(-1);
    return answer;
}