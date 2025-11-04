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
    if (answer.empty()) {
        vector<string> v;
        v.push_back("EMPTY");
        return v;
    } else return answer;
    return (answer.empty() ? vector<string>() : answer);
}