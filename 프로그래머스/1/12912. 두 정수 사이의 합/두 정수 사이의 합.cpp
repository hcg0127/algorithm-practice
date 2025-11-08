#include <bits/stdc++.h>

using namespace std;

long long solution(int a, int b) {
    return (long long) (abs(a-b) + 1) * (a + b) / 2;
}