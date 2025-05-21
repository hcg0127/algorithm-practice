#include <bits/stdc++.h>
using namespace std;

int n,m;
string str;
map<string, string> mp;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> m;
    for (int i=0; i<n; i++) {
        cin >> str;
        mp[str] = to_string(i+1);
        mp[to_string(i+1)] = str;
    }
    for (int i=0; i<m; i++) {
        cin >> str;
        cout << mp[str] << '\n';
    }
}