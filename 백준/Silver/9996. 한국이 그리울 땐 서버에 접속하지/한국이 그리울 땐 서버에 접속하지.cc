#include <bits/stdc++.h>
using namespace std;

int n;
string str,x;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> str;
    for (int i=0; i<n; i++) {
        bool flag = false;
        cin >> x;
        if (x.size()<str.size()-1) {
            cout << "NE\n";
            continue;
        }
        int l=0;
        while (str[l]!='*') {
            if (str[l]==x[l]) l++;
            else {
                flag = true;
                break;
            }
        }
        l=0;
        reverse(x.begin(),x.end());
        reverse(str.begin(),str.end());
        while (str[l]!='*') {
            if (str[l]==x[l]) l++;
            else {
                flag = true;
                break;
            }
        }
        cout << (flag ? "NE\n" : "DA\n");
        reverse(str.begin(),str.end());
    }
}