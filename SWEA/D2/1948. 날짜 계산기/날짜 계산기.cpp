#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    int days[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    
    for (int tc=1; tc<=t; tc++) {
        int a,b,c,d,ans=0;
        cin >> a >> b >> c >> d;
        
        if (a==c) ans = d-b;
        else {
            ans += days[a] - b + d;
            for (int i=a+1; i<c; i++) {
                ans += days[i];
            }
        }
        
        cout << "#" << tc << " " << ans+1 << '\n';
    }
}