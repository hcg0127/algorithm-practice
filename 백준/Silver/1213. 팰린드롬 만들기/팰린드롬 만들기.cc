#include <bits/stdc++.h>
using namespace std;

string str,ans,temp;
int arr[26],od,odidx;
vector<char> v;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> str;
    for (char i : str) arr[i-'A']++;
    for (int i=0; i<26; i++) {
        if (arr[i]==0) continue;
        if (arr[i]%2==0) v.push_back(i+'A');
        else {
            v.push_back(i+'A');
            od++;
            odidx = i;
        }
    }
    int ss=str.size(),idx=0;
    if (od>=2 || (ss%2==1 && od==0)) {
        cout << "I\'m Sorry Hansoo";
        return 0;
    }
    for (int i=0; i<26; i++) {
        if (arr[i]==0) continue;
        for (int j=0; j<arr[i]/2; j++) {
            temp += v[idx];
        }
        idx++;
    }
    ans += temp;
    if (od==1) ans += (odidx+'A');
    reverse(temp.begin(),temp.end());
    ans += temp;
    cout << ans;
}