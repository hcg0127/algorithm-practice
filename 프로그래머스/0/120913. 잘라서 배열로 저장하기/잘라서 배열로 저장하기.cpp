#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    int ss = my_str.size();
    for (int i=0; i<ss; i+=n) {
        answer.push_back(my_str.substr(i,n));
    }
    return answer;
}