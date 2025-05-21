#include <bits/stdc++.h>
using namespace std;

int n,k,x,sum[100001],mx=-1e9;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> k;
    for (int i=0; i<n; i++) {
        cin >> x;
        sum[i+1] += sum[i] + x;
    }
    for (int i=0; i<n-k+1; i++) {
        mx = max(mx, sum[i+k] - sum[i]);
    }
    cout << mx;
}