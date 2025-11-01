#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> numbers, int n) {
    int answer = 0;
    for (auto i : numbers) {
        answer += i;
        if (answer > n) break;
    }
    return answer;
}