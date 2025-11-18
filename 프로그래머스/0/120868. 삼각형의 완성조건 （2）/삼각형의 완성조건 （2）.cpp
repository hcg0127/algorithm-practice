#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> sides) {
    set<int> s;
    int answer = 0, mn=min(sides[0],sides[1]),mx=max(sides[0],sides[1]);
    for (int i=1; i<=mx; i++) {
        if (i+mn>mx) s.insert(i);
    }
    for (int i=mx+1; i<=mn+mx; i++) {
        if (mn+mx>i) s.insert(i);
    }
    return s.size();
}