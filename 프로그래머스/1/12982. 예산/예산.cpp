#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0, sum = 0;
    sort(d.begin(),d.end());
    for (auto i : d) {
        sum += i;
        if (sum>budget) break;
        answer++;
    }
    return answer;
}