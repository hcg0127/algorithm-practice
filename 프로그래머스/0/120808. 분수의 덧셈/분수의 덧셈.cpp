#include <bits/stdc++.h>

using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    int num = numer1 * denom2 + numer2 * denom1, den = denom1 * denom2;
    answer.push_back(num/gcd(num,den));
    answer.push_back(den/gcd(num,den));
    return answer;
}