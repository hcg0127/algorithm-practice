#include <bits/stdc++.h>
using namespace std;

int k;
char ch;
bool flag[9],visited[10];
string mx="0",mn="9999999999";

void back(int d, string tmp) {
    if (d==k+1) {
        if (mn>tmp) mn=tmp;
        if (mx<tmp) mx=tmp;
        return;
    }
    for (int i=0; i<10; i++) {
        if (!visited[i]) {
            if (d>0 && (!(flag[d-1] && tmp[d-1]-'0'<i || !flag[d-1] && tmp[d-1]-'0'>i))) continue;
            visited[i]=1;
            back(d+1,tmp+to_string(i));
            visited[i]=0;
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> k;
    for (int i=0; i<k; i++) {
        cin >> ch;
        flag[i] = ch=='<' ? 1 : 0;
    }

    back(0,"");
    cout << mx << '\n' << mn;
}