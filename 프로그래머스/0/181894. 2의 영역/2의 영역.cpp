#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int r = arr.size(),l=0,il=-1,ir=-1;
    for (int i=0; i<r; i++) {
        if (arr[i]==2) {
            il = i;
            break;
        }
    }
    for (int i=r-1; i>=0; i--) {
        if (arr[i]==2) {
            ir = i;
            break;
        }
    }
    if (il==-1 && ir==-1) answer.push_back(-1);
    else for (int i=il; i<=ir; i++) answer.push_back(arr[i]);
    return answer;
}