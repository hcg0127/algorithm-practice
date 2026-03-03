#include <bits/stdc++.h>
#define ll long long

using namespace std;

int solution(vector<int> queue1, vector<int> queue2) {
    long long sum1 = accumulate(queue1.begin(), queue1.end(), 0LL), sum2 = accumulate(queue2.begin(), queue2.end(), 0LL), target = (sum1 + sum2) /2;
    
    if ((sum1+sum2) & 1) return -1;
    
    vector<int> v = queue1;
    v.insert(v.end(), queue2.begin(),queue2.end());
    
    int n = queue1.size(), l = 0, r = n-1, cnt = 0, mx_cnt = n*4;
    ll cur_sum = sum1;
    
    while (cnt <= mx_cnt) {
        if (cur_sum == target) return cnt;
        if (cur_sum < target) {
            r++;
            if (r>=v.size()) r=0;
            cur_sum += v[r];
        } else {
            cur_sum -= v[l];
            l++;
            if (l>=v.size()) l=0;
        }
        cnt++;
    }
    return -1;
}