#include <bits/stdc++.h>

using namespace std;
int num;

bool cmp(int a, int b) {
    if (abs(num-a)==abs(num-b)) return a>b;
    else return abs(num-a)<abs(num-b);
}

vector<int> solution(vector<int> numlist, int n) {
    num = n;
    sort(numlist.begin(),numlist.end(),cmp);
    return numlist;
}