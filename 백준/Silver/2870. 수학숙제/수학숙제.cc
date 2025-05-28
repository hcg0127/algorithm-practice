#include <bits/stdc++.h>
using namespace std;

int n;
string str;
vector<string> v;

bool cmp(string a, string b) {
    if (a.size()==b.size()) {
        int ss=a.size();
        for (int i=0; i<ss; i++) {
            if (a[i]==b[i]) continue;
            else return a[i]<b[i];
        }
        return 1;
    }
    else return a.size()<b.size();
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n;
    while (n--) {
        cin >> str;
        string num = "";
        for (auto ch:str) {
            if (ch>=97 && ch<=122) {
                if (!num.empty()) v.push_back(num);
                num="";
            }
            else {
                if (num=="0" && ch=='0') continue;
                else if (num=="0" && ch!='0') num = ch;
                else num += ch;
            }
        }
        if (!num.empty()) v.push_back(num);
    }
    sort(v.begin(),v.end(),cmp);
    for (auto i:v) cout << i << '\n';
}