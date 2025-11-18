#include <bits/stdc++.h>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    int answer = 2;
    sort(spell.begin(),spell.end());
    for (auto &s : dic) {
        if (s.size()!=spell.size()) continue;
        sort(s.begin(),s.end());
        int ss = s.size();
        bool flag = 1;
        for (int i=0; i<ss; i++) {
            if (s[i]!=spell[i][0]) {
                flag = 0;
                break;
            }
        }
        if (flag) {
            answer=1;
            break;
        }
    }
    return answer;
}