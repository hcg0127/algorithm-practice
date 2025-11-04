#include <bits/stdc++.h>

using namespace std;

vector<string> solution(string myStr) {
    vector<string> answer;
    string tmp = "";
    for (auto c : myStr) {
        if (c=='a' || c=='b' || c=='c') {
            if (tmp.compare("")!=0) {
                answer.push_back(tmp);
                tmp = "";
            }
        } else tmp.push_back(c);
    }
    if (tmp.compare("")!=0) answer.push_back(tmp);
    if (answer.empty()) answer.push_back("EMPTY");
    return answer;
}