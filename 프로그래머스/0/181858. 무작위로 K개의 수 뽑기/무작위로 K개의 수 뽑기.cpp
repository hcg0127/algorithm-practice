#include <bits/stdc++.h>

using namespace std;
bool flag[100001];

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer, s;
    for (auto i : arr) {
        if (!flag[i]) {
            s.push_back(i);
            flag[i] = 1;
        }
    }
    if (s.size()<=k) {
        answer = s;
        answer.insert(answer.end(), k-s.size(), -1);
    }
    else {
        for (int i=0; i<k; i++) answer.push_back(s[i]);
    }
    return answer;
}