#include <bits/stdc++.h>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    string s = to_string(n);
    sort(s.begin(),s.end());
    reverse(s.begin(),s.end());
    for (auto c : s) answer = answer*10 + (c-'0');
    return answer;
}