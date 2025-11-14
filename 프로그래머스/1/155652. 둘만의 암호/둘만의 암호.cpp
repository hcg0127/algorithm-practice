#include <bits/stdc++.h>

using namespace std;

string solution(string s, string skip, int index) {
    sort(skip.begin(),skip.end());
    for (auto &c : s) {
        vector<char> v(skip.begin(),skip.end());
        int vs = v.size();
        for (int i=0; i<index; i++) {
            c = (c-'a'+1)%26+97;
            for (int j=0; j<vs; j++) {
                if (find(v.begin(),v.end(),c)!=v.end()) c = (c-'a'+1)%26+97;
            }
        }
    }
    return s;
}