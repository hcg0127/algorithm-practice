#include <bits/stdc++.h>
using namespace std;

int main() {
    for (int tc=1; tc<=10; tc++) {
        int t;
        cin >> t;
        
        vector<int> row(100), col(100);
        int diag1 = 0, diag2 = 0;
        for (int i=0; i<100; i++) {
            for (int j=0; j<100; j++) {
                int x;
                cin >> x;
                
                row[i] += x;
                col[j] += x;
                if (i == j) diag1 += x;
				if (i + j == 99) diag2 += x;
            }
        }
        
        int ans = max(diag1, diag2);

        for (int i = 0; i < 100; i++) {
            ans = max(ans, row[i]);
            ans = max(ans, col[i]);
        }
        
        cout << "#" << t << " " << ans << '\n';
    }
}