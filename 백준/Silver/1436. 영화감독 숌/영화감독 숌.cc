#include <bits/stdc++.h>
using namespace std;

int n,cnt;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n;
    for (int i=666; i<3000000; i++) {
        if (to_string(i).find("666")!=string::npos) cnt++;
        if (cnt==n) {
            cout << i;
            return 0;
        }
    }
}