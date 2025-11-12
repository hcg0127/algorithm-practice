#include <bits/stdc++.h>

using namespace std;

string solution(string s, int n) {
    for (auto &c : s) {
        if (isupper(c)) c = (c+n-65) % 26 + 65;
        else if (islower(c)) c = (c+n-97) % 26 + 97;
        else if (isdigit(c)) c = (c+n-48) % 26 + 48;
    }
    return s;
}