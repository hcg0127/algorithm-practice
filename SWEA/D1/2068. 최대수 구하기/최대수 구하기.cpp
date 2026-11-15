#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i=1; i<=t; i++) {
        int mx=0,n;
        for (int j=0; j<10; j++) {
            cin >> n;
            if (n>mx) mx = n;
        }
        cout << "#" << i << " " << mx << '\n';
    }
}