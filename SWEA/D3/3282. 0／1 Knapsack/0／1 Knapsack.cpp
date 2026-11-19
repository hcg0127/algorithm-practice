#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    for (int tc=1; tc<=t; tc++) {
        int n,k;
        cin >> n >> k;
        
        vector<vector<int>> vec(n+1,vector<int>(k+1));
        for (int i=1; i<=n; i++) {
            int v,c;
            cin >> v >> c;
            
            for (int j=1; j<=k; j++) {
                if (v>j) vec[i][j] = vec[i-1][j];
                else vec[i][j] = max(vec[i-1][j],c+vec[i-1][j-v]);
            }
        }
        
        cout << "#" << tc << " " << vec[n][k] << '\n';
    }
}