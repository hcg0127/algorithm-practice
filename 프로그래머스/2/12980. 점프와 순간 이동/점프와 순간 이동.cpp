#include <bits/stdc++.h>
using namespace std;

int solution(int n) {
    int ans = 0;
    
    while (n) {
        while (!(n%2)) {
            n/=2;
        }
        ans++;
        n-=1;
    }

    return ans;
}