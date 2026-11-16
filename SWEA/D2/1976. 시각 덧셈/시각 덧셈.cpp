#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    for (int tc=1; tc<=t; tc++) {
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        
        int m = b + d, h = a + c;
        if (m>59) {
            h++;
            m-=60;
        }
        if (h>12) {
            h-=12;
        }
        
        cout << "#" << tc << " " << h << " " << m << '\n';
    }
}