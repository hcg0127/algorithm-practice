#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i=1; i<=t; i++) {
        string s;
        cin >> s;
        string y = s.substr(0,4), m = s.substr(4,2), d = s.substr(6,2);
        bool flag = 0;
        int im = stoi(m), id = stoi(d);
        
        if (im<1 || 12<im) flag = 1;
        else if (im==1 || im==3 || im==5 || im==7 || im==8 || im==10 || im==12) {
            if (id<1 || 31<id) flag = 1;
        } else if (im==2) {
            if (id<1 || 28<id) flag = 1;
        } else {
            if (id<1 || 30<id) flag = 1;
        }
        
        cout << "#" << i << " ";
        if (flag) cout << -1 << '\n';
        else cout << y << "/" << m << "/" << d << '\n';
    }
}