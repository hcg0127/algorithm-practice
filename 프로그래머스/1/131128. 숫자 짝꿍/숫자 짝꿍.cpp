#include <bits/stdc++.h>

using namespace std;

string solution(string X, string Y) {
    string ans = "";
    sort(X.begin(),X.end());
    sort(Y.begin(),Y.end());
    set_intersection(X.begin(),X.end(),Y.begin(),Y.end(),back_inserter(ans));
    sort(ans.begin(),ans.end(),greater<>());
    if (ans == "") return "-1";
    else if (ans.front() == '0') return "0";
    else return ans;
}