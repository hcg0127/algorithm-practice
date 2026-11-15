#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    for (int tc=1; tc<=t; tc++) {
        string s;
        cin >> s;
        
        int ss = s.size();
        for (int i=1; i<=10; i++) {
            string a = s.substr(0,i), b = s.substr(i, i);
            if (a.compare(b)==0) {
                cout << "#" << tc << " " << i << '\n';
                break;
            }
        }
    }
}