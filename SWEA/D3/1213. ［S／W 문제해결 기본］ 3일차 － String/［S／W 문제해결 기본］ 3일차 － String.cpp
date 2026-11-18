#include <iostream>
#include <string>
using namespace std;

int main() {
    for (int tc=1; tc<=10; tc++) {
        int t,ans=0;
        cin >> t;
        
        string tar, str;
        cin >> tar >> str;
        
        auto idx = str.find(tar,0);
        while (idx != string::npos) {
            ans++;
            idx = str.find(tar,idx+tar.size());
        }
        
        cout << "#" << t << " " << ans << '\n';
    }
}