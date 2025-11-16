#include <bits/stdc++.h>

using namespace std;

int solution(int num, int k) {
    string ans = to_string(num);
    int ss = ans.size();
    for (int i=0; i<ss; i++) {
        if (ans[i]-'0'==k) return i+1;
    }
    return -1;
}