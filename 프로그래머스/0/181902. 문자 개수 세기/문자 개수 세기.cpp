#include <string>
#include <vector>

using namespace std;

vector<int> answer(52);

vector<int> solution(string my_string) {
    for (auto ch : my_string) {
        if (65 <= ch && ch <= 90) {
            answer[ch-65]++;
        } else if (97 <= ch && ch <= 122) {
            answer[ch-97+26]++;
        }
    }
    return answer;
}