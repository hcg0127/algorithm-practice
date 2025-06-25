#include <bits/stdc++.h>
using namespace std;

int n,arr[42],ans=INT_MAX;
string str;

void go(int cur) {
    if (cur==n+1) {
        int sum=0;
        for (int i=1; i<=(1<<(n-1)); i*=2) {
            int cnt=0;
            for (int j=1; j<=n; j++) if (arr[j] & i) cnt++;
            sum += min(cnt, n-cnt);
        }
        ans = min(ans,sum);
        return;
    }
    go(cur+1);
    arr[cur] = ~arr[cur];
    go(cur+1);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n;
    for (int i=1; i<=n; i++) {
        cin >> str;
        int val=1;
        for (int j=0; j<n; j++) {
            if (str[j]=='T') arr[i] |= val;
            val *= 2;
        }
    }

    go(1);
    cout << ans;
}