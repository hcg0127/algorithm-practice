#include <bits/stdc++.h>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    while (n>=a) {
        int remain = n%a, ad = n/a*b;
        answer += ad;
        n = remain + ad;
    }
    return answer;
}