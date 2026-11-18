#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    for (int tc=1; tc<=t; tc++) {
        string s;
        cin >> s;
        
        int ans = 0;
        bool flag = 0, cur = 1;
        for (auto c : s) {
            if (!flag && c=='1') {
                flag = 1;
                ans++;
            }
            if (flag && (c-'0')!=cur) {
                cur = c-'0';
                ans++;
            }
        }
        
        cout << "#" << tc << " " << ans << '\n';
    }
}