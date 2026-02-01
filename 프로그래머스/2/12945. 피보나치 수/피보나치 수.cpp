#include <bits/stdc++.h>

using namespace std;

int f[100001];

int solution(int n) {
    int answer = 0;
    f[0]=0;
    f[1]=1;
    for (int i=2; i<=n; i++) {
        f[i] = (f[i-1]%1234567 + f[i-2]%1234567)%1234567;
    }
    return f[n];
}