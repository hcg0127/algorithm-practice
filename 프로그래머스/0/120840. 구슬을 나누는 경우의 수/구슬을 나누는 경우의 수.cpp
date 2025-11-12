#include <string>
#include <vector>

using namespace std;

int solution(int balls, int share) {
    long long int answer = 1;
    share = min(share, balls-share);
    for (int i=1; i<=share; i++) {
        answer *= balls-i+1;
        answer /= i;
    }
    return answer;
}