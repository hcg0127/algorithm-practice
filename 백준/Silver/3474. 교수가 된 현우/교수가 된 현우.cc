#include <bits/stdc++.h>
using namespace std;

int t,n;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> t;
    while (t--) {
        cin >> n;
        int ans = 0;
        for (int i=1; i<=12; i++) ans += n/(int)pow(5,i);
        cout << ans << '\n';
    }
}