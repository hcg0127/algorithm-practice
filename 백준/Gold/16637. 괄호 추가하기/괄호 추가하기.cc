#include <bits/stdc++.h>
using namespace std;

int n,ans=INT_MIN;
string str;
vector<int> num;
vector<char> op;

int cal(char oper, int a, int b) {
    switch (oper) {
        case '+': return a+b;
        case '-': return a-b;
        case '*': return a*b;
    }
    return 0;
}

void back(int x, int sum) {
    if (x==n/2) {
        ans = max(ans,sum);
        return;
    }
    back(x+1, cal(op[x], sum, num[x+1]));

    if (x+2<=n/2) {
        int tmp = cal(op[x+1], num[x+1], num[x+2]);
        back(x+2, cal(op[x], sum, tmp));
    }
    return;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> str;
    for (auto i:str) {
        if (i=='+' || i=='-' || i=='*') op.push_back(i);
        else num.push_back(i-'0');
    }
    back(0,num[0]);
    cout << ans;
}