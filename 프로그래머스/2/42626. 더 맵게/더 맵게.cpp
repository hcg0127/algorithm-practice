#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int,vector<int>, greater<int>> pq;
    for (auto i : scoville) pq.push(i);
    while (1) {
        int st = pq.top();
        if (st>=K) break;
        pq.pop();
        if (pq.empty()) return -1;
        int nd = pq.top();
        pq.pop();
        pq.push(st+nd*2);
        answer++;
    }
    return answer;
}