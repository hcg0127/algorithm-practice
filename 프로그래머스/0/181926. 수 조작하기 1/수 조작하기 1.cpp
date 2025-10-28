#include <string>
#include <vector>

using namespace std;

int solution(int n, string control) {
    int answer = n;
    for (auto ch : control) {
        if (ch=='w') answer += 1;
        else if (ch=='s') answer -= 1;
        else if (ch=='d') answer += 10;
        else answer -= 10;
    }
    return answer;
}