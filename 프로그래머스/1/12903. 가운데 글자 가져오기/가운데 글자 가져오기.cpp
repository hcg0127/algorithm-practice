#include <bits/stdc++.h>

using namespace std;

string solution(string s) {
    int ss = s.size();
    return ss&1 ? s.substr(ss/2,1) : s.substr(ss/2-1,2);
}