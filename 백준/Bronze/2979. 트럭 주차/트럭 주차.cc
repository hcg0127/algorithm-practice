#include <bits/stdc++.h>
using namespace std;

int a,b,c,x,y,mn,mx,sum;
int arr[101];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> a >> b >> c;
    for (int i=0; i<3; i++) {
        cin >> x >> y;
        mn = min(mn,x);
        mx = max(mx,y);
        for (int j=x; j<y; j++) arr[j] += 1;
    }

    for (int i=mn; i<=mx; i++) {
        if (arr[i]==1) sum += a;
        else if (arr[i]==2) sum += 2*b;
        else if (arr[i]==3) sum += 3*c;
    }

    cout << sum;
}