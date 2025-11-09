#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> arr) {
    int mn = *min_element(arr.begin(),arr.end());
    arr.erase(remove(arr.begin(),arr.end(),mn),arr.end());
    return arr.empty() ? vector<int>(1,-1) : arr;
}