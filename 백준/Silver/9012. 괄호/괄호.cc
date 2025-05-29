#include <bits/stdc++.h>
using namespace std;

int t;
string str;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> t;
    while (t--) {
        cin >> str;
        stack<char> s;
        for (auto i:str) {
            if (s.empty() || i=='(') s.push(i);
            else {
                if (s.top()=='(' && i==')') s.pop();
                else s.push(i);
            }
        }
        cout << (s.empty() ? "YES" : "NO") << '\n';
    }
}