#include <bits/stdc++.h>

using namespace std;

int solution(int n) {
    int answer = 0, i = 1, idx = 1;
    if (n==1) return 1;
    while (i<n) {
        i*=idx++;
        answer++;
    }
    if (i!=n) answer--;
    return answer;
}