#include <string>
#include <vector>

using namespace std;

bool flag[10001];

vector<int> solution(int n) {
    vector<int> answer;
    int i = 2;
    while (n>1) {
        if (!(n%i)) {
            if (!flag[i]) {
                flag[i] = 1;
                answer.push_back(i);
            }
            n/=i;
        }
        else i++;
    }
    return answer;
}