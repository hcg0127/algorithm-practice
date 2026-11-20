#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<vector<int>> edges(201, vector<int>());
vector<bool> visited(201);

void bfs(int start) {
    queue<int> q;
    q.push(start);
    visited[start] = 1;
    
    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        
        for (auto i : edges[cur]) {
            if (visited[i]) continue;
            q.push(i);
            visited[i] = 1;
        }
    }
}

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (computers[i][j]!=1) continue;
            edges[i].push_back(j);
            edges[j].push_back(i);
        }
    }
    
    for (int i=0; i<n; i++) {
        if (visited[i]) continue;
        bfs(i);
        answer++;
    }
    
    return answer;
}