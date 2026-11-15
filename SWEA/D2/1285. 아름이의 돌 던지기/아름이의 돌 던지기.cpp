#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    for (int tc=1; tc<=t; tc++) {
        int n;
        cin >> n;
        
        map<int,int> m;
        for (int i=0; i<n; i++) {
            int x;
            cin >> x;
            m[abs(x)]++;
        }
        
        for (auto [a,b] : m) {
            cout << "#" << tc << " " << a << " " << b << '\n';
            break;
        }
    }
}