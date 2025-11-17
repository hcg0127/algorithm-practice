#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> nums) {
    sort(nums.begin(),nums.end());
    int vs = nums.size();
    return max(nums[vs-1]*nums[vs-2],nums[0]*nums[1]);
}