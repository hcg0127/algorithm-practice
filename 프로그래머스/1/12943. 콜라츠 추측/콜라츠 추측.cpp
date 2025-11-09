#include <string>
#include <vector>

using namespace std;

int solution(int tmp) {
    int answer = 0;
    long long num = tmp;
    while (num>1) {
        answer++;
        if (num&1) num = num*3+1;
        else num/=2;
    }
    return answer>500 ? -1 : answer;
}