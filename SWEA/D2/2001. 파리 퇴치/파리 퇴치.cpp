#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    for (int i=1; i<=t; i++) {
        int n,m;
        cin >> n >> m;
        
        vector<vector<int>> prefix(n+1, vector<int>(n+1));
        
        for (int j=0; j<n; j++) {
            for (int k=0; k<n; k++) {
                int x;
                cin >> x;
                
                prefix[j+1][k+1] = x + prefix[j][k+1] + prefix[j+1][k] - prefix[j][k];
            }
        }
        
        int ans = 0;
        for (int r=0; r<=n-m; r++) {
            for (int c=0; c<=n-m; c++) {
                int sum = prefix[r+m][c+m] - prefix[r][c+m] - prefix[r+m][c] + prefix[r][c];
                ans = max(ans,sum);
            }
        }
        cout << "#" << i << " " << ans << '\n';
    }
}