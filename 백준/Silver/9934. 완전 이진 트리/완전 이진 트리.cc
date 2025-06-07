#include <bits/stdc++.h>
using namespace std;

int k,n,arr[1024];
vector<int> vec[11];

void inorder(int dep, int l, int r) {
    if (dep==k+1 || l>r) return;
    int mid = (l+r)/2;
    vec[dep].push_back(arr[mid]);
    inorder(dep+1,l,mid);
    inorder(dep+1,mid+1,r);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> k;
    n = (int) pow(2,k) - 1;
    for (int i=0; i<n; i++) cin >> arr[i];

    inorder(1,0,n);
    for (int i=1; i<=k; i++) {
        for (auto i:vec[i]) cout << i << ' ';
        cout << '\n';
    }
}