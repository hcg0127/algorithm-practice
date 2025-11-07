#include <bits/stdc++.h>

using namespace std;

vector<string> solution(vector<string> picture, int k) {
    vector<string> answer;
    for (auto s : picture) {
        string tmp = "";
        for (auto c : s) {
            tmp.append(k,c);
        }
        answer.insert(answer.end(),k,tmp);
    }
    return answer;
}