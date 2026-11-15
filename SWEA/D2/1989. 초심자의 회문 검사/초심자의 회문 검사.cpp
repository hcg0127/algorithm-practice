#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    for (int tc=1; tc<=t; tc++) {
        string s;
        cin >> s;
        
        bool flag = 1;
        int a=0, b=s.size()-1;
        while (a<b) {
            if (s[a++]!=s[b--]) {
                flag = 0;
                break;
            }
        }
        
        cout << "#" << tc << " " << flag << '\n';
    }
}