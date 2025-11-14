#include <string>
#include <vector>

using namespace std;

int solution(int order) {
    int answer = 0;
    string tmp = to_string(order);
    for (auto c : tmp) {
        if ((c-'0')%3==0 && c!='0') answer++;
    }
    return answer;
}