#include <bits/stdc++.h>
using namespace std;

string str;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    while (true) {
        getline(cin,str);
        if (str==".") break;

        stack<char> s;
        for (auto i : str) {
            if (i!='(' && i!=')' && i!='[' && i!=']') continue;
            if (i=='(' || i=='[' || s.empty()) s.push(i);
            else {
                if (s.top()=='(' && i==')' || s.top()=='[' && i==']') s.pop();
                else s.push(i);
            }
        }
        cout << (s.empty() ? "yes" : "no") << '\n';
    }
}