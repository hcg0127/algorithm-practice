#include <bits/stdc++.h>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0, n = skill.size();
    map<char,int> m;
    for (int i=0; i<n; i++) m[skill[i]]=i+1;
    for (auto str : skill_trees) {
        int idx=1;
        bool flag = 1;
        for (auto ch : str) {
            if (m[ch]==idx) {
                idx++;
            } else if (m[ch]>idx) {
                flag = 0;
                break;
            }
        }
        if (flag) answer++;
    }
    return answer;
}