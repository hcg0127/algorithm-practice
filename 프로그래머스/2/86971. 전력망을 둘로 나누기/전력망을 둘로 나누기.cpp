#include <bits/stdc++.h>

using namespace std;

vector<int> edge[101];
bool visited[101];

int cut(int v1, int v2) {
    queue<int> q;
    fill(visited,visited+101,0);
    int s=1;
    q.push(v1);
    visited[v1]=1;
    while (!q.empty()) {
        int cv = q.front();
        q.pop();
        for (auto i : edge[cv]) {
            if (i==v2 || visited[i]) continue;
            q.push(i);
            visited[i]=1;
            s++;
        }
    }
    return s;
}

int solution(int n, vector<vector<int>> wires) {
    int ans = 1e9;
    for (auto w : wires) {
        edge[w[0]].push_back(w[1]);
        edge[w[1]].push_back(w[0]);
    }
    for (auto w : wires) ans = min(ans,abs(cut(w[0],w[1])-cut(w[1],w[0])));
    return ans;
}