#include <bits/stdc++.h>
using namespace std;

int t,n;

int main() {
    
    cin >> t;
    for (int i=1; i<=t; i++) {
        int sum = 0;
        for (int j=0; j<10; j++) {
            cin >> n;
           	if (n&1) sum += n;
        }
        cout << "#" << i << " " << sum << '\n';
    }

    return 0;
}