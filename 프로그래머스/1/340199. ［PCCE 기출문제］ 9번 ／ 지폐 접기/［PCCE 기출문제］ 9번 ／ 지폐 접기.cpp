#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> wallet, vector<int> bill) {
    int ans=0,mx=wallet[0],mn=wallet[1],a=bill[0],b=bill[1];
    if (mn>mx) swap(mx,mn);
    while (1) {
        if (b>a) swap(a,b);
        if (mx>=a && mn>=b) break;
        a>b ? a/=2 : b/=2;
        ans++;
    }
    return ans;
}