#include <bits/stdc++.h>
#define pii pair<int,int>

using namespace std;

bool cmp(pii a, pii b) {
    return a.second>b.second;
}

int solution(int k, vector<int> tangerine) {
    int answer = 0, sum = 0;
    map<int,int> m;
    for (auto t : tangerine) {
        m[t]++;
    }
    vector<pii> v(m.begin(),m.end());
    sort(v.begin(),v.end(),cmp);
    for (auto p : v) {
        sum += p.second;
        if (sum>=k) {
            answer++;
            break;
        } else {
            answer++;
        }
    }
    return answer;
}