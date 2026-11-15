#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,a,b;
    cin >> t;
    for (int i=1; i<=t; i++) {
        cin >> a >> b;
        char c;
        if (a>b) c = '>';
        else if (a==b) c='=';
        else c='<';
        cout << "#" << i << " " << c << '\n';
    }
}