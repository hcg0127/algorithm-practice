#include <bits/stdc++.h>

using namespace std;

map<string,int> ans,cnt;
vector<string> vstr;
vector<int> vi;

bool cmp() {
    for (auto str : vstr) {
        if (cnt[str]!=ans[str]) return false;
    }
    return true;
}

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    vstr = want;
    vi = number;
    int answer = 0, n = discount.size(), vs = want.size();
    for (int i=0; i<vs; i++) {
        ans[want[i]] = number[i];
    }
    for (int i=0; i<10; i++) {
        cnt[discount[i]]++;
    }
    if (cmp()) answer++;
    for (int i=10; i<n; i++) {
        cnt[discount[i-10]]--;
        cnt[discount[i]]++;
        if (cmp()) answer++;
    }
    return answer;
}