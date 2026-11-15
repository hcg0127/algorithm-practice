#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    
    cin >> n;
    int nb[n];
    for (int i=0; i<n; i++) {
        cin >> nb[i];
    }
    sort(nb,nb+n);
    cout << nb[n/2];
}