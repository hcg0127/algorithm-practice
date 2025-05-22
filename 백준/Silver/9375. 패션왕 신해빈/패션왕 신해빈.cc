#include <bits/stdc++.h>
using namespace std;

int t,n,ans;
string a,b;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> t;
    while (t--) {
        cin >> n;
        unordered_map<string, int> um;
        for (int i=0; i<n; i++) {
            cin >> a >> b;
            um[b]++;
        }
        int ms = um.size(),ans=1;
        for (auto [c,d] : um) {
            ans *= (d+1);
        }
        cout << ans-1 << '\n';
    }
}