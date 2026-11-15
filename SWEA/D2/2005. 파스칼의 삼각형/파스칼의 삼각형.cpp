#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    for (int tc=1; tc<=t; tc++) {
        int n;
        cin >> n;
        
        vector<vector<int>> vec(n, vector<int>(n));
        vec[0][0] = 1;
        for (int i=1; i<n; i++) {
            vec[i][0] = 1;
            vec[i][n-1] = 1;
            for (int j=1; j<n-1; j++) {
                vec[i][j] = vec[i-1][j-1] + vec[i-1][j];
            }
        }
        
        cout << "#" << tc << "\n";
        for (int i=0; i<n; i++) {
            for (int j=0; j<i+1; j++) {
                cout << vec[i][j] << " ";
            }
            cout << '\n';
        }
    }
}