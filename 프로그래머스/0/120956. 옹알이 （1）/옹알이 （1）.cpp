#include <bits/stdc++.h>

using namespace std;

int solution(vector<string> babbling) {
    vector<string> v = {"aya", "ye", "woo", "ma"};
    int answer = 0;
    for (auto &str : babbling) {
        int pos,cnt=0;
        for (auto s : v) {
            if ((pos=str.find(s))!=string::npos) {
                str.replace(pos,s.size()," ");
                cnt++;
            }
        }
        if (str.size()==cnt) answer++;
    }
    
    return answer;
}