#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    for (int tc=1; tc<=t; tc++) {
        int n,l;
        cin >> n >> l;
        
        vector<vector<int>> vec(n+1, vector<int>(l+1));
        for (int i=1; i<=n; i++) {
            int sc,kc;
            cin >> sc >> kc;
            for (int j=1; j<=l; j++) {
                if (kc>j) vec[i][j] = vec[i-1][j];
                else vec[i][j] = max(vec[i-1][j], vec[i-1][j-kc]+sc);
            }
        }
        cout << "#" << tc << " " << vec[n][l] << '\n';
    }
}