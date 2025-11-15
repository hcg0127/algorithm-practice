#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> array) {
    auto mx = max_element(array.begin(),array.end());
    int idx = mx - array.begin();
    return vector<int>{*mx,idx};
}