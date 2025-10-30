#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr, int idx) {
    int answer = -1,vs=arr.size();
    for (int i=idx; i<vs; i++) {
        if (arr[i]) {
            answer = i;
            break;
        }
    }
    return answer;
}