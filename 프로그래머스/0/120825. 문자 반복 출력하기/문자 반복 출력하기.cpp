#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    for (auto c : my_string) {
        answer.insert(answer.end(),n,c);
    }
    return answer;
}