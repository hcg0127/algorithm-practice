#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> arr) {
    int vs=arr.size(),tmp=pow(2,ceil(log2(vs)));
    if (vs!=1) arr.insert(arr.end(),tmp-vs,0);
    return arr;
}