#include <bits/stdc++.h>

using namespace std;

int solution(int n) {
    string tmp = "";
    while (n>2) {
        tmp += to_string(n%3);
        n/=3;
    }
    tmp += to_string(n);
    int ss = tmp.size(), answer=0;
    for (auto i : tmp) {
        answer += (i-'0') * pow(3,ss-1);
        ss--;
    }
    return answer;
}