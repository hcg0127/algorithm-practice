#include <bits/stdc++.h>

using namespace std;

string solution(string myString, string pat) {
    string a1 = "", a2 = "";
    int ss = myString.size(), ps = pat.size();
    auto it = myString.rfind(pat);
    return a1 = myString.substr(0,it+ps);
}