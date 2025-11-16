#include <bits/stdc++.h>

using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    for (auto s : quiz) {
        stringstream ss(s);
        string tmp;
        int a,b,ans;
        char op,eq;
        ss >> a >> op >> b >> eq >> ans;
        if (op=='+') answer.push_back(a+b==ans ? "O" : "X");
        else answer.push_back(a-b==ans ? "O" : "X");
    }
    return answer;
}