#include<bits/stdc++.h>

using namespace std;

bool solution(string s)
{
    stack<char> st;
    
    for (auto c : s) {
        if (st.empty() || c=='(') st.push(c);
        else if (st.top()=='(' && c==')') st.pop();
    }

    return st.empty();
}