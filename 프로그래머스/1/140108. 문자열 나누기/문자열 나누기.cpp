#include <bits/stdc++.h>

using namespace std;
bool flag[26];

int solution(string s) {
    int answer=0, ss=s.size(), lac=0, dfc=0;
    char c=0;
    while (1) {
        for (int i=0; i<ss; i++) {
            if (c==0) {
                c=s[i];
                lac++;
            } else {
                if (c==s[i]) lac++;
                else dfc++;
                if (lac==dfc) {
                    answer++;
                    lac=0;
                    dfc=0;
                    c=0;
                }
            }
        }
        if (c!=0) answer++;
        break;
    }
    return answer;
}