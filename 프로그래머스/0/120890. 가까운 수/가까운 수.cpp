#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> array, int n) {
    int vs = array.size();
    sort(array.begin(),array.end());
    auto tmp = lower_bound(array.begin(),array.end(),n) - array.begin();
    if (vs==tmp) return array[vs-1];
    else if (array[tmp]-n > n-array[tmp-1]) return array[tmp-1];
    else return array[tmp];
}