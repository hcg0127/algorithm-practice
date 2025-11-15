#include <bits/stdc++.h>

using namespace std;

int solution(vector<string> s1, vector<string> s2) {
    int answer = 0;
    for (auto s:s1) {
        if (find(s2.begin(),s2.end(),s)!=s2.end()) answer++;
    }
    return answer;
}