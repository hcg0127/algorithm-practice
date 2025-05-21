#include <bits/stdc++.h>
using namespace std;

int n,k,arr[100000],sum[100001],mx=-1e9;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> k;
    for (int i=0; i<n; i++) {
        cin >> arr[i];
        sum[i+1] += sum[i] + arr[i];
    }
    for (int i=0; i<n-k+1; i++) {
        mx = max(mx, sum[i+k] - sum[i]);
    }
    cout << mx;
}