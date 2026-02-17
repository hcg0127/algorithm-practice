#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> topping) {
    int ans=0;
    map<int,int> m;
    set<int> s;
    for (auto i : topping) m[i]++;
    for (auto i : topping) {
        s.insert(i);
        m[i]--;
        if (m[i]==0) m.erase(i);
        if (s.size()==m.size()) ans++;
    }
    return ans;
}