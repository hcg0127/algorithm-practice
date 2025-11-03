#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    string tmp = "";
    for (auto c : my_string) {
        if (c!=' ') tmp+=c;
        else {
            answer.push_back(tmp);
            tmp = "";
        }
    }
    answer.push_back(tmp);
    return answer;
}