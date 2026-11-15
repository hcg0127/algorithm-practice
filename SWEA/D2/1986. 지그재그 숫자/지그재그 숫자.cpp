#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    for (int tc=1; tc<=t; tc++) {
        int n,ans=0;
        cin >> n;
        
        for (int i=1; i<=n; i++) {
            if (i%2) ans += i;
            else ans -= i;
        }
        
        cout << "#" << tc << " " << ans << '\n';
    }
}