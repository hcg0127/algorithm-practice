#include <bits/stdc++.h>

using namespace std;

vector<string> solution(string myString) {
    vector<string> answer;
    string tmp = "";
    for (auto c : myString) {
        if (c!='x') tmp.push_back(c);
        else if (tmp.compare("")!=0) {
            answer.push_back(tmp);
            tmp = "";
        }
    }
    if (tmp.compare("")!=0) answer.push_back(tmp);
    sort(answer.begin(),answer.end());
    return answer;
}