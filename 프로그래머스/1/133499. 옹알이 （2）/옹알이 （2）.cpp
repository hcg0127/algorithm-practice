#include <bits/stdc++.h>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    vector<string> v = {"aya", "ye", "woo", "ma"};
    for (auto &str : babbling) {
        if (str.find("ayaaya")!=string::npos ||
           str.find("yeye")!=string::npos ||
           str.find("woowoo")!=string::npos ||
           str.find("mama")!=string::npos) continue;
        int pos;
        for (auto s : v) {
            while ((pos=str.find(s))!=string::npos) {
                str.replace(pos,s.size()," ");
            }
        }
        bool flag = 1;
        for (auto c : str) {
            if (c!=' ') {
                flag = 0;
                break;
            }
        }
        if (flag) answer++;
    }
    return answer;
}