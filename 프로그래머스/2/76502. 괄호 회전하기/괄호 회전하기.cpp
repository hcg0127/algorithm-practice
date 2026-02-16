#include <bits/stdc++.h>

using namespace std;

int solution(string s) {
    int answer = 0, ss = s.size();
    for (int i=0; i<ss; i++) {
        stack<char> st;
        bool flag = 1;
        for (auto ch : s) {
            if (ch=='[' || ch=='{' || ch=='(') st.push(ch);
            else {
                if (st.empty()) {
                    flag = 0;
                    break;
                }
                char t = st.top();
                if (t=='[' && ch==']' || t=='{' && ch=='}' || t=='(' && ch==')') st.pop();
                else {
                    flag = 0;
                    break;
                }
            }
        }
        if (flag && st.empty()) answer++;
        s = s.substr(1) + s[0];
    }
    return answer;
}