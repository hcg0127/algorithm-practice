#include <bits/stdc++.h>
using namespace std;

int main() {
    for (int tc=1; tc<=10; tc++) {
        int n;
        cin >> n;
        
        vector<vector<int>> vec(100, vector<int>(100));
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                cin >> vec[i][j];
            }
        }
        
        int ans = 0;
        for (int j=0; j<n; j++) {
            bool flag = 0;
            for (int i=0; i<n; i++) {
                if (vec[i][j]==1) flag= 1;
                else if (vec[i][j]==2 && flag) {
                    flag = 0;
                    ans ++;
                }
            }
        }
        
        cout << "#" << tc << " " << ans << '\n';
    }
}