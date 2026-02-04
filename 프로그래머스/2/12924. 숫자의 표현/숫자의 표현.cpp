#include <bits/stdc++.h>

using namespace std;

int solution(int n) {
    int answer = 0, l=1, r=1, sum=1;
    while (l<=n) {
        if (sum==n) {
            answer++;
            sum -= l;
            l++;
        } else if (sum<n) {
            r++;
            sum += r;
        } else {
            sum -= l;
            l++;
        }
        
    }
    return answer;
}