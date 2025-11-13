#include <bits/stdc++.h>
using namespace std;

int n,ans;
vector<int> v;

bool isPrime(int num) {
    if (num<2) return false;
    for (int i=2; i<=sqrt(num); i++) {
        if (!(num%i)) return false;
    }
    return true;
}

void back(int d, int x, int sum) {
    if (d==3) {
        if (isPrime(sum)) ans++;
        return;
    }
    for (int i=x; i<n; i++) {
        back(d+1,i+1,sum+v[i]);
    }
}

int solution(vector<int> nums) {
    v=nums;
    n=nums.size();

    back(0,0,0);

    return ans;
}