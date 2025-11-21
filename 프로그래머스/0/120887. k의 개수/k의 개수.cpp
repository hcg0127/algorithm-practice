#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    for (int idx=i; idx<=j; idx++) {
        int tmp = idx;
        while (tmp) {
            if (tmp%10==k) {
                answer++;
            }
            tmp/=10;
        }
    }
    return answer;
}