#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    for (int tc=1; tc<=t; tc++) {
        int n,k,ans=0;
        cin >> n >> k;
        
        vector<vector<int>> vec(n,vector<int>(n));
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                cin >> vec[i][j];
            }
        }
        
        for (int i=0; i<n; i++) {
            int tmp=0;
            for (int j=0; j<n; j++) {
                if (vec[i][j]) tmp++;
                else {
                    if (tmp==k) ans++;
                    tmp = 0;
                }
            }
            if (tmp==k) ans++;
        }
        
        for (int j=0; j<n; j++) {
            int tmp=0;
            for (int i=0; i<n; i++) {
                if (vec[i][j]) tmp++;
                else {
                    if (tmp==k) ans++;
                    tmp = 0;
                }
            }
            if (tmp==k) ans++;
        }
        
        cout << "#" << tc << " " << ans << '\n';
    }
}