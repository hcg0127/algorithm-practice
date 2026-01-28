#include <bits/stdc++.h>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int mt = 1;
    map<string,int> m;
    for (auto v : clothes) {
        m[v[1]]++;
    }
    if (m.size()==1) return clothes.size();
    for (auto p : m) {
        mt*=1+p.second;
    }
    return mt-1;
}