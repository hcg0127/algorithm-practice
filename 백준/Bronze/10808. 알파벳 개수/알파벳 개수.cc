#include <bits/stdc++.h>
using namespace std;

string str;
int arr[26];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> str;
    int ss = str.size();

    for (int i=0; i<ss; i++) {
        arr[str[i]-'a']++;
    }
    for (auto i:arr) cout << i << ' ';
}