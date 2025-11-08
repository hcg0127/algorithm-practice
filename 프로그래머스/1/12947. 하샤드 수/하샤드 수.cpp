#include <bits/stdc++.h>

using namespace std;

bool solution(int n) {
    int sum=0, x=n;
    while (x) {
        sum += x%10;
        x/=10;
    }
    return !(n%sum);
}