#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    for (int tc=1; tc<=t; tc++) {
        int n;
        cin >> n;
        
        string s = "";
        for (int i=0; i<n; i++) {
            char c;
            int x;
            cin >> c >> x;
            string cx(x,c);
            s += cx;
        }
        
        int cnt = 0;
        cout << "#" << tc << '\n';
        for (auto c : s) {
            cout << c;
            cnt++;
            if (cnt==10) {
                cout << '\n';
                cnt=0;
            }
        }
        cout << '\n';
    }
}