#include <bits/stdc++.h>
using namespace std;

int t,n;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> t;
    while (t--) {
        cin >> n;
        int ans = 0, fi = 5;
        for (int i=0; i<12; i++) {
            ans += n/fi;
            fi *= 5;
        }
        cout << ans << '\n';
    }
}