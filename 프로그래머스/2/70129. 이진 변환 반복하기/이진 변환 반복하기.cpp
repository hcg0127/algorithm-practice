#include <bits/stdc++.h>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer(2,0);
    while (s.compare("1")!=0) {
        answer[0]++;
        int one = 0;
        for (auto c : s) {
            if (c=='1') one++;
        }
        answer[1] += s.size()-one;
        string tmp = "";
        while (one>1) {
            tmp += to_string(one%2);
            one/=2;
        }
        tmp += to_string(one);
        reverse(tmp.begin(),tmp.end());
        s = tmp;
    }
    return answer;
}