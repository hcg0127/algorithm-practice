#include <string>
#include <vector>

using namespace std;

int d(int num) {
    int tmp=0;
    for (int i=1; i<=num; i++) {
        if (!(num%i)) tmp++;
    }
    return tmp;
}

int solution(int left, int right) {
    int answer = 0;
    for (int i=left; i<=right; i++) {
        answer += d(i)&1 ? -1 * i : i;
    }
    return answer;
}