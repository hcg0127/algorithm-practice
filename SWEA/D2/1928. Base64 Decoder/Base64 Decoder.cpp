#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    string tab = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    
    for (int tc=1; tc<=t; tc++) {
        string s, de1="",ans="";
        cin >> s;
        
        for (auto c : s) {
            auto tmp = tab.find(c);
            bitset<6> bs(tmp);
            de1 += bs.to_string();
        }
        
        int ds = de1.size();
        for (int i=0; i<ds; i+=8) {
            string tmp = de1.substr(i,8);
            bitset<8> bs(tmp);
            unsigned long val = bs.to_ulong();
            ans += (char)val;
        }
        
        cout << "#" << tc << " " << ans << '\n';
    }
}