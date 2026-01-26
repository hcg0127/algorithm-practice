#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    map<char,int> mn;
    for (auto str : keymap) {
        int n = str.size();
        for (int i=0; i<n; i++) {
            char c = str[i];
            if (mn[c]==0 || mn[c]>i+1) mn[c]=i+1;
        }
    }
    for (auto str : targets) {
        int n = str.size(), ans=0;
        bool flag = 1;
        for (int i=0; i<n; i++) {
            char c = str[i];
            if (mn[c]==0) {
                flag = 0;
                break;
            }
            ans += mn[c];
        }
        if (!flag) ans = -1;
        answer.push_back(ans);
    }
    return answer;
}