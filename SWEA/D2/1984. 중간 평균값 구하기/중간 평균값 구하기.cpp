#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    for (int tc=1; tc<=t; tc++) {
        int x,mx=0,mn=10000;
        double sum = 0;
        
        for (int i=0; i<10; i++) {
            cin >> x;
            sum += x;
            mx = max(mx,x);
            mn = min(mn,x);
        }
        
        cout <<"#" << tc << " " << round((sum-mx-mn)/8) << '\n';
    }
}