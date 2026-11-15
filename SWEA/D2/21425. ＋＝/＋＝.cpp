#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    for (int tc=1; tc<=t; tc++) {
        long long a,b,n,ans=0;
        cin >> a >> b >> n;
        
        while (a <= n && b <= n) {
            ans++;
            if (a<b) {
                a += b;
            } else {
                b += a;
            }
        }
        
        cout << ans << '\n';
    }
}