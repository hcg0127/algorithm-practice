#include <bits/stdc++.h>
using namespace std;

long long int a,b,c;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> a >> b >> c;
    int r=1;
    a%=c;
    while (b>0) {
        if (b%2==1) r = (r*a)%c;
        b/=2;
        a = (a*a)%c;
    }
    cout << r;
}