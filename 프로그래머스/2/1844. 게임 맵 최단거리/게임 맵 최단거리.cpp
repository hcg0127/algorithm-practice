#include <bits/stdc++.h>
#define pii pair<int,int>

using namespace std;

int n,m,ans=0,dx[4]={0,1,0,-1},dy[4]={1,0,-1,0},visited[100][100];
vector<vector<int>> v;

void bfs(int a, int b) {
    queue<pii> q;
    q.push({a,b});
    visited[a][b]=1;
    while (!q.empty()) {
        auto [x,y] = q.front();
        q.pop();
        for (int i=0; i<4; i++) {
            int cx=x+dx[i], cy=y+dy[i];
            if (cx<0 || cy<0 || cx>=n || cy>=m || visited[cx][cy] || v[cx][cy]==0) continue;
            q.push({cx,cy});
            visited[cx][cy]=visited[x][y]+1;
        }
    }
}

int solution(vector<vector<int>> maps)
{
    n = maps.size();
    m = maps[0].size();
    v = maps;
    bfs(0,0);
    return visited[n-1][m-1]==0 ? -1 : visited[n-1][m-1];
}