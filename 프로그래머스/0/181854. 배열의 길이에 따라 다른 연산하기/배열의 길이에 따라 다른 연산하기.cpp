#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> arr, int n) {
    int vs = arr.size();
    for (int i=!(vs%2); i<vs; i+=2) arr[i]+=n;
    return arr;
}