#include <bits/stdc++.h>
#define pii pair<int,int>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer=0, w=0, idx=0, n=truck_weights.size();
    queue<pii> q;
    while (idx<n) {
        int tw = truck_weights[idx];
        answer++;
        if (!q.empty()) {
            auto [x,y] = q.front();
            if (answer-x==bridge_length) {
                w -= y;
                q.pop();
            }
        }
        if (w+tw<=weight) {
            w += tw;
            q.push({answer,tw});
            idx++;
        }
    }
    if (!q.empty()) answer += bridge_length;
    return answer;
}