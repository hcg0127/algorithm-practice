#include <bits/stdc++.h>
using namespace std;

int n,m;
string str;
vector<string> v;
unordered_map<string, int> um;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> m;
    for (int i=0; i<n; i++) {
        cin >> str;
        v.push_back(str);
        um[str] = i+1;
    }
    for (int i=0; i<m; i++) {
        cin >> str;
        if (str[0]>=65 && str[0]<=90 || str[0]>=97 && str[0]<=122)
            cout << um[str] << '\n';
        else
            cout << v[stoi(str)-1] << '\n';
    }
}