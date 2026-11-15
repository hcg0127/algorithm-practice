#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int i=1; i<=n; i++) {
        int num = i, cnt = 0;
        while (num) {
            int d = num%10;
            if (d==3 || d==6 || d==9) cnt++;
            num /= 10;
        }
        string s(cnt, '-');
        if (cnt) cout << s;
        else cout << i;
        cout << " ";
    }
}