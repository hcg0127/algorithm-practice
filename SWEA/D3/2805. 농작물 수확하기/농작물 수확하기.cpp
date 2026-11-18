#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    for (int tc=1; tc<=t; tc++) {
        int n;
        cin >> n;
        
        int ans = 0, mid = n/2;
        for (int i=0; i<n; i++) {
            string s;
            cin >> s;
            for (int j=0; j<n; j++) {
                int x = s[j] - '0';
                if (abs(mid-i)+abs(mid-j)<=mid) ans += x;
            }
        }
        
        cout << "#" << tc << " " << ans << '\n';
    }
}