#include <bits/stdc++.h>
#define pii pair<int,int>
using namespace std;

int n,c,x;
vector<pair<pii,int>> v; // num, idx, freq
map<int,pii> nfi_mp; // num,freq,idx

bool cmp(pair<pii,int> a, pair<pii,int> b) {
    if (a.second==b.second) return a.first.second<b.first.second;
    else return a.second>b.second;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> c;
    for (int i=0; i<n; i++) {
        cin >> x;
        if (nfi_mp[x].first<1) nfi_mp[x].second = i;
        nfi_mp[x].first++;
    }
    
    for (auto i : nfi_mp) {
        int num=i.first,freq=i.second.first,idx=i.second.second;
        v.push_back({{num,idx},freq});
    }
    sort(v.begin(),v.end(),cmp);
    for (auto i : v) {
        int freq = i.second;
        for (int j=0; j<freq; j++) cout << i.first.first << ' ';
    }
}