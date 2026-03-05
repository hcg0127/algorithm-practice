#include <bits/stdc++.h>
#define pii pair<int,int>
using namespace std;

int d[51];
vector<pii> v[51];

void bfs(int x) {
    fill(d,d+51,1e9);
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    d[x] = 0;
    pq.push({0,x});
    while (!pq.empty()) {
        auto [a,b] = pq.top();
        pq.pop();
        if (d[b]<a) continue;
        
        for (auto& edge : v[b]) {
            if (d[edge.first]>a+edge.second) {
                d[edge.first] = a+edge.second;
                pq.push({d[edge.first], edge.first});
            }
        }
    }
}

int solution(int N, vector<vector<int> > road, int K) {
    int answer = 0;
    for (int i=1; i<=N; i++) v[i].clear();

    for (auto &r : road) {
        v[r[0]].push_back({r[1],r[2]});
        v[r[1]].push_back({r[0],r[2]});
    }
    
    bfs(1);
    
    for (int i=1; i<=N; i++) if (d[i]<=K) answer++;

    return answer;
}