#include <bits/stdc++.h>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int mn=0,mx=0;
    for (auto &v : sizes) {
        if (v[0]>v[1]) swap(v[0],v[1]);
        mx = max(mx,v[1]);
        mn = max(mn,v[0]);
    }
    return mx * mn;
}