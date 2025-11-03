#include <string>
#include <vector>

using namespace std;

vector<int> solution(string myString) {
    vector<int> answer;
    string tmp = "";
    for (auto c : myString) {
        if (c!='x') tmp.push_back(c);
        else {
            answer.push_back(tmp.size());
            tmp = "";
        }
    }
    answer.push_back(tmp.size());
    return answer;
}