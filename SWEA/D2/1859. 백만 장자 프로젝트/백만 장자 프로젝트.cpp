#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t,n;
    cin >> t;
    for (int i=1; i<=t; i++) {
        long ans=0;
        cin >> n;
        vector<int> vec(n);
        for (int j=0; j<n; j++) {
            cin >> vec[j];
        }
        int mx = vec[n-1];
        for (int j=n-1; j>=0; j--) {
            if (mx>vec[j]) ans += mx - vec[j];
            else mx = vec[j];
        }
        cout << "#" << i << " " << ans << "\n";
    }
}