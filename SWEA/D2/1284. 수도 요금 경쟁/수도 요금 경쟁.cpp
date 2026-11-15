#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    for (int tc=1; tc<=t; tc++) {
        int p,q,r,s,w;
        cin >> p >> q >> r >> s >> w;
        
        long long a = p * w, b = q + (w<=r ? 0 : s*(w-r));
        
        cout << "#" << tc << " " << min(a,b) << '\n';
    }
}