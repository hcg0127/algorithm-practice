#include <bits/stdc++.h>
using namespace std;

string str;
bool flag;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> str;

    int l=0,r=str.size()-1;

    while (l<r) {
        if (!(str[l]==str[r])) {
            cout << 0;
            return 0;
        }
        l++;
        r--;
    }

    cout << 1;
}