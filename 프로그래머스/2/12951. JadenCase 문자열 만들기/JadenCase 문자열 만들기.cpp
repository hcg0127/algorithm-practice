#include <bits/stdc++.h>

using namespace std;

string solution(string s) {
    string answer = "";
    bool flag = 1;
    for (auto c : s) {
        if (c==' ') {
            flag = 1;
            answer += c;
        } else {
            if (flag && 'a'<=c && c<='z') answer += toupper(c);
            else if (!flag && 'A'<=c && c<='Z') answer += tolower(c);
            else answer += c;
            flag = 0;
        }
    }
    
    return answer;
}