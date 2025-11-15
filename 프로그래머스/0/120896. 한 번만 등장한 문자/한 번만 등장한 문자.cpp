#include <bits/stdc++.h>

using namespace std;
map<char,int> m;

string solution(string s) {
    string answer = "";
    for (auto c : s) {
        m[c]++;
    }
    for (auto p : m) {
        if (p.second==1) answer += p.first;
    }
    return answer;
}