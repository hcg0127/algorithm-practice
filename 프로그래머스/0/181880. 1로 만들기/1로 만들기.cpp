#include <bits/stdc++.h>

using namespace std;

int memo[31],answer;

int solution(vector<int> num_list) {
    memo[2] = 1;
    for (int i=3; i<=30; i++) {
        if (i%2) {
            memo[i] = memo[(i-1)/2] + 1;
        } else {
            memo[i] = memo[i/2] + 1;
        }
    }
    for (auto i : num_list) {
        answer += memo[i];
    }
    return answer;
}