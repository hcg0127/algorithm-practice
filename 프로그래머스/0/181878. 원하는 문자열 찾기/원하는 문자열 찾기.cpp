#include <bits/stdc++.h>

using namespace std;

int solution(string myString, string pat) {
    for (auto &s:myString) {
        s = toupper(s);
    }
    for (auto &p:pat) {
        p = toupper(p);
    }
    return (myString.find(pat)!=EOF ? 1 : 0);
}