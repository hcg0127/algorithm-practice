#include <bits/stdc++.h>
using namespace std;

int n,ans;
string str;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n;
    while (n--) {
        cin >> str;
        stack<char> s;
        for (auto i:str) {
            if (s.empty()) s.push(i);
            else if (s.top()==i) s.pop();
            else s.push(i);
        }
        if (s.empty()) ans++;
    }
    cout << ans;
}