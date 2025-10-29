#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    for (auto str : intStrs) {
        int tmp = stoi(str.substr(s, l));
        if (tmp > k) answer.push_back(tmp);
    }
    return answer;
}