#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    while (cin >> n) {
        long long int cnt=1,r=1;
        while (true) {
            if (cnt%n==0) {
                cout << r << '\n';
                break;
            } else {
                cnt = (cnt*10) + 1;
                cnt %= n;
                r++;
            }
        }
    }
}