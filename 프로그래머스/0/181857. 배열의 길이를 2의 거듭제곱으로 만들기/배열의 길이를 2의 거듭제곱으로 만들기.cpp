#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> arr) {
    int tmp=1,vs=arr.size();
    if (vs==1) return arr;
    while (1) {
        tmp*=2;
        if (tmp>=vs) break;
    }
    arr.insert(arr.end(),tmp-vs,0);
    return arr;
}