#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    for (int tc=1; tc<=t; tc++) {
        int n,cnt=0;
        cin >> n;
        
        bool flag[10];
        fill(flag,flag+10,0);
        
        int k=0, cur;
        while (1) {
            cur = n * ++k;
            while (cur) {
                if (!flag[cur%10]) {
                    flag[cur%10] = 1;
                    cnt++;
                }
                cur /= 10;
            }
            if (cnt==10) break;
        }
        cout << "#" << tc << " " << k*n << '\n';
    }
}