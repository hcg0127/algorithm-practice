#include <bits/stdc++.h>

using namespace std;

string solution(string s) {
    string answer = "", num;
    stringstream ss(s);
    int mx = INT_MIN, mn = INT_MAX;
    while (ss >> num) {
        int ns = num.size(), n;
        n = (num[0]=='-' ? -1 * stoi(num.substr(1,ns-1)) : stoi(num));
        mx = max(mx,n);
        mn = min(mn,n);
    }
    return to_string(mn) + " " + to_string(mx);
}