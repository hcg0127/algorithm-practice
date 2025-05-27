#include <bits/stdc++.h>
using namespace std;

int n;
string str,ans;
bool board[64][64];

void cq(int a, int b, int n) {
    int one=0;
    for (int i=a; i<a+n; i++) {
        for (int j=b; j<b+n; j++) {
            if (board[i][j]) one++;
        }
    }
    if (one==n*n) ans += '1';
    else if (one==0) ans += '0';
    else {
        ans += '(';
        cq(a,b,n/2);
        cq(a,b+n/2,n/2);
        cq(a+n/2,b,n/2);
        cq(a+n/2,b+n/2,n/2);
        ans += ')';
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> str;
        for (int j=0; j<n; j++) board[i][j] = (str[j]=='1' ? 1 : 0);
    }

    cq(0,0,n);
    cout << ans;
}