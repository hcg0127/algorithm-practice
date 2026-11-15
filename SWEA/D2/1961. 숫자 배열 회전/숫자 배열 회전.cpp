#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    for (int tc=1; tc<=t; tc++) {
        int n;
        cin >> n;
        
        vector<vector<int>> vec(n,vector<int>(n));
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                cin >> vec[i][j];
            }
        }
        
        cout << "#" << tc << '\n';
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                cout << vec[n-1-j][i];
            }
            cout << " ";
            for (int j=0; j<n; j++) {
                cout << vec[n-1-i][n-1-j];
            }
            cout << " ";
            for (int j=0; j<n; j++) {
                cout << vec[j][n-1-i];
            }
            cout << '\n';
        }
    }
}