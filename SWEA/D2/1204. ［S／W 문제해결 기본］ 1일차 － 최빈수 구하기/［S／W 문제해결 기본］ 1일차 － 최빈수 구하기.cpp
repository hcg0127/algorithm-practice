#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    for (int i=1; i<=t; i++) {
        int a,mx=0,ans;
        cin >> a;
        
        map<int,int> m;
        for (int i=0; i<1000; i++) {
            cin >> a;
            m[a]++;
        }
        
        for (auto p : m) {
            if (p.second >= mx) {
                mx = p.second;
                ans = p.first;
            }
        }
        cout << "#" << i << " " << ans << '\n';
    }
}