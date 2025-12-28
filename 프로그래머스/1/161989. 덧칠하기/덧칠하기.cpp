#include <bits/stdc++.h>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0, cur = 0;
    for (auto i : section) {
        if (i>cur) {
            answer++;
            cur = i+m-1;
        }
    }
    return answer;
}