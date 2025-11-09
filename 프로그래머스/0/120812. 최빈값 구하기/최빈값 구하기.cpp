#include <bits/stdc++.h>

using namespace std;
map<int,int> m;

int solution(vector<int> array) {
    int answer = 0, mx = 0;
    for (auto i : array) m[i]++;
    for (auto p : m) {
        if (mx<p.second) {
            mx = p.second;
            answer = p.first;
        }
        else if (mx==p.second) answer = -1;
    }
    return answer;
}