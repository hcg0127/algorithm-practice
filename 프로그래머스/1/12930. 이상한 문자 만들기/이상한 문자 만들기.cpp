#include <bits/stdc++.h>

using namespace std;

string solution(string s) {
    int i=0;
    for (auto &c : s) {
        if(c!=' ') {
            if (i&1) c = tolower(c);
            else c = toupper(c);
            i++;
        } else i=0;
    }
    return s;
}