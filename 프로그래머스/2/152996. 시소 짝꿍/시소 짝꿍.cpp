#include <bits/stdc++.h>

using namespace std;

long long arr[1001];

long long solution(vector<int> weights) {
    long long answer = 0;
    for (auto w : weights) {
        arr[w]++;
    }
    for (int i=100; i<=1000; i++) {
        if (!arr[i]) continue;
        
        answer += (arr[i] * (arr[i]-1)) / 2;
        
        if (i*3 % 2 == 0 && i*3 / 2 <= 1000) answer += arr[i] * arr[i*3/2];
        if (i*2 <= 1000) answer += arr[i] * arr[i*2];
        if (i*4 % 3 == 0 && i*4 / 3 <= 1000) answer += arr[i] * arr[i*4/3];
    }
    return answer;
}