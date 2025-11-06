#include <bits/stdc++.h>

using namespace std;

string solution(string n_str) {
    bool flag = 0;
    string answer = "";
    for (auto i : n_str) {
        if (i!='0') {
            if (!flag) flag = 1;
            answer.push_back(i);
        } else if (i=='0' && flag) answer.push_back(i);
    }
    return answer;
}