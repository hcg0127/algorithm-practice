#include <bits/stdc++.h>
using namespace std;

int n,m,x,ans;
vector<int> v;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> m;
    for (int i=0; i<n; i++) {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int l=0, r=n-1;
    while (l<r) {
        if (v[l]+v[r]==m) {
            ans++;
            l++;
            r--;
        } else if (v[l]+v[r]>m) r--;
        else l++;
    }
    cout << ans;
}