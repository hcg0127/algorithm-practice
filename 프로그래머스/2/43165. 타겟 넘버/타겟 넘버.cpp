#include <bits/stdc++.h>

using namespace std;

int ans,t,n;
vector<int> nums;

void dfs(int d, int sum) {
    if (d==n) {
        if (sum==t) ans++;
        return;
    }
    dfs(d+1,sum+nums[d]);
    dfs(d+1,sum-nums[d]);
}

int solution(vector<int> numbers, int target) {
    nums = numbers;
    n = numbers.size();
    t = target;
    dfs(0,0);
    return ans;
}