#include <bits/stdc++.h>
using namespace std;

int main() {
    for (int tc=1; tc<=10; tc++) {
        int n,ans=0;
        cin >> n;
        
        vector<int> vec(n);
        for (int i=0; i<n; i++) {
            cin >> vec[i];
        }
        
        for (int i=2; i<n-2; i++) {
            int x=vec[i], v1=x-vec[i-2], v2=x-vec[i-1], v3=x-vec[i+1], v4=x-vec[i+2];
            if (v1<0 || v2<0 || v3<0 || v4<0) continue;
            ans += min({v1,v2,v3,v4});
        }
        
        cout << "#" << tc << " " << ans << '\n';
    }
}