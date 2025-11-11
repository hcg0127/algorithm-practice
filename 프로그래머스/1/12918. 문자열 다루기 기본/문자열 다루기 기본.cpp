#include <bits/stdc++.h>

using namespace std;

bool solution(string s) {
    int ss = s.size();
    if (ss!=4 && ss!=6) return false;
    for (auto c : s) {
        if (c<48 || c>57) return false;
    }
    return true;
}