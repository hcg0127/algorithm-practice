#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    
    cin >> t;
    for (int i=1; i<=t; i++) {
        double ag=0, n;
        for (int j=0; j<10 ; j++) {
            cin >> n;
            ag += n;
        }
        cout << "#" << i << " " << round(ag/10) << "\n";
    }
}