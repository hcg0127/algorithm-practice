#include <bits/stdc++.h>
#define pii pair<int,int>
using namespace std;

int n,x,ans[1000000];
stack<pii> s; // num, idx

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n;
    fill(ans,ans+1000000,-1);
    for (int i=0; i<n; i++) {
        cin >> x;
        if (s.empty() || s.top().first>=x) s.push({x,i});
        else {
            while (!s.empty() && s.top().first<x) {
                auto [a,b] = s.top();
                s.pop();
                ans[b] = x;
            }
            s.push({x,i});
        }
    }

    for (int i=0; i<n; i++) cout << ans[i] << ' ';
}