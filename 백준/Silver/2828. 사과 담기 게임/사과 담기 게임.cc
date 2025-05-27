#include <bits/stdc++.h>
using namespace std;

int n,m,j,x,d=1,ans;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> m >> j;
    while (j--) {
        cin >> x;
        if (d<=x && x<=d+m-1) continue;
        else if (x>d+m-1) {
            ans += x-(d+m-1);
            d += x-(d+m-1);
        } else {
            ans += d-x;
            d = x;
        }
    }
    cout << ans;
}