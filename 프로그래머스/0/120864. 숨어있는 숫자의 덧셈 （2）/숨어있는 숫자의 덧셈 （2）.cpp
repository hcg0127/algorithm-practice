#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0, tmp = 0;
    bool flag = 0;
    for (auto c : my_string) {
        if (48<=c && c<=57) {
            if (flag) tmp *=10;
            tmp += c-'0';
            flag = 1;
        } else {
            flag = 0;
            if (tmp!=0) answer += tmp;
            tmp = 0;
        }
    }
    if (tmp!=0) answer += tmp;
    return answer;
}