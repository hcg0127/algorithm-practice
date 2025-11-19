#include <bits/stdc++.h>

using namespace std;

int solution(int a, int b) {
    int gc = b/gcd(a,b);
    while (1) {
        if (gc%2==0) gc/=2;
        else break;
    }
    while (1) {
        if (gc%5==0) gc/=5;
        else break;
    }
    return gc==1 ? 1 : 2;
}