#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    for (int tc=1; tc<=t; tc++) {
        int n,m;
        cin >> n >> m;
        
        vector<int> v1(n), v2(m);
        for (int i=0; i<n; i++) cin >> v1[i];
        for (int j=0; j<m; j++) cin >> v2[j];
        
        if (n>m) v1.swap(v2);
        int s1=v1.size(), s2=v2.size(),ans=0;
            
        for (int i=0; i<s2-s1+1; i++) {
            int tmp = 0;
            for (int j=i; j<i+s1; j++) {
                tmp += v1[j-i] * v2[j];
            }
            if (tmp>ans) ans = tmp;
        }
        
        cout << "#" << tc << " " << ans << '\n';
    }
}