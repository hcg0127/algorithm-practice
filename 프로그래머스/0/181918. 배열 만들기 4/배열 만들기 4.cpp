#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> stk;
    int vs = arr.size();
    for (int i=0; i<vs; i++) {
        if (stk.empty()) {
            stk.push_back(arr[i]);
        }
        else if (stk.back() < arr[i]) {
            stk.push_back(arr[i]);
        }
        else {
            stk.pop_back();
            i--;
        }
    }
    return stk;
}