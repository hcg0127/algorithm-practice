#include <string>
#include <vector>

using namespace std;

int solution(int tmp) {
    int answer = 0;
    long long num = tmp;
    while (num>1 && answer<=500) {
        answer++;
        num = num&1 ? num*3+1 : num/=2;
    }
    return answer>500 ? -1 : answer;
}