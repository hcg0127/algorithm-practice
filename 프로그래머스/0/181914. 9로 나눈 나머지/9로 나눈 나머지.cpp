#include <string>
#include <vector>

using namespace std;

int solution(string number) {
    int answer = 0;
    for (auto ch : number) {
        answer += ch - '0';
    }
    return answer % 9;
}