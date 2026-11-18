#include <bits/stdc++.h>
using namespace std;

int main() {
    for (int tc=1; tc<=10; tc++) {
        int n;
        cin >> n;
        
        vector<string> vec(8);
        for (int i=0; i<8; i++) {
            cin >> vec[i];
        }
        
        int ans = 0;
        for (int i=0; i<8; i++) {
            for (int j=0; j<9-n; j++) {
                int l = j, r = j+n-1;
                bool flag = 1;
                while (l<r) {
                    if (vec[i][l++] != vec[i][r--]) {
                        flag = 0;
                        break;
                    }
                }
                if (flag) ans++;
            }
        }
        
        for (int j=0; j<8; j++) {
            for (int i=0; i<9-n; i++) {
                int u = i, d = i+n-1;
                bool flag = 1;
                while (u<d) {
                    if (vec[u++][j] != vec[d--][j]) {
                        flag = 0;
                        break;
                    }
                }
                if (flag) ans++;
            }
        }
        
        cout << "#" << tc << " " << ans << '\n';
    }   
}