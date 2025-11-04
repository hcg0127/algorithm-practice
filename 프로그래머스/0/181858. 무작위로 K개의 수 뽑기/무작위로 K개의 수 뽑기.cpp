#include <bits/stdc++.h>

using namespace std;
bool flag[100001];

vector<int> solution(vector<int> arr, int k) {
    vector<int> s;
    for (auto i : arr) {
        if (!flag[i]) {
            s.push_back(i);
            flag[i] = 1;
        }
    }
    s.resize(k,-1);
    return s;
}