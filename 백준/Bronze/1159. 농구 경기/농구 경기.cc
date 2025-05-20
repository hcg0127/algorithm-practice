#include <bits/stdc++.h>
using namespace std;

int n,arr[26];
string str;
bool flag;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> str;
        arr[str[0]-'a']++;
    }
    for (int i=0; i<26; i++) {
        if (arr[i]>=5) {
            cout << (char)('a' + i);
            flag = true;
        }
    }
    if (!flag) cout << "PREDAJA";
}