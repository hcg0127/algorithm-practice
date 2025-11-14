#include <algorithm>
#include <vector>

using namespace std;
bool flag[130];

string solution(string my_string) {
    string answer = "";
    for (auto c : my_string) {
        if (!flag[c]) {
            flag[c] = 1;
            answer+=c;
        }
    }
    return answer;
}