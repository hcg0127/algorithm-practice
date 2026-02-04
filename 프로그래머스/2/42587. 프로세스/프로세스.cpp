#include <bits/stdc++.h>
#define pii pair<int,int>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0, n = priorities.size();
    priority_queue<int> pq;
    queue<pii> q;
    for (int i=0; i<n; i++) {
        q.push({priorities[i],i});
        pq.push(priorities[i]);
    }
    while (1) {
        auto [x,y] = q.front();
        if (x==pq.top()) {
            answer++;
            if (y==location) return answer;
            pq.pop();
        } else {
            q.push(q.front());
        }
        q.pop();
    }
}