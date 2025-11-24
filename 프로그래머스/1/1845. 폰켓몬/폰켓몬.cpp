#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> nums)
{
    unordered_set<int> us(nums.begin(),nums.end());
    int cnt = us.size(),mx=nums.size()/2;
    return min(cnt,mx);
}