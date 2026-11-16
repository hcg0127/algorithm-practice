#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    for (int tc=1; tc<=t; tc++) {
        int n;
        cin >> n;
        
        int num[n];
        for (int i=0; i<n; i++) {
            cin >> num[i];
        }
        sort(num,num+n);
        
        cout << "#" << tc << " ";
        for (auto i : num) cout << i << " ";
        cout << '\n';
    }
}