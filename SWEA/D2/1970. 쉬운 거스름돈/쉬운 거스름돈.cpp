#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    int money[8] = {50000, 10000, 5000, 1000, 500, 100, 50, 10};
    for (int tc=1; tc<=t; tc++) {
        int n;
        cin >> n;
        
        vector<int> ans;
        for (auto i : money) {
            ans.push_back(n/i);
            n%=i;
        }
        
        cout << "#" << tc << '\n';
        for (auto i : ans) cout << i << " ";
        cout << '\n';
    }
}