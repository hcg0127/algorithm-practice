#include <bits/stdc++.h>
#define pii pair<int,int>

using namespace std;

int dx[4]={0,1,0,-1}, dy[4]={1,0,-1,0}, board[100][100], n, m;
vector<int> answer;
bool visited[100][100];

void bfs(int a, int b) {
    int sum = board[a][b];
    queue<pii> q;
    q.push({a,b});
    visited[a][b]=1;
    while (!q.empty()) {
        auto [x,y] = q.front();
        q.pop();
        for (int i=0; i<4; i++) {
            int cx=x+dx[i], cy=y+dy[i];
            if (cx<0 || cy<0 || cx>=n || cy>=m || visited[cx][cy] || !board[cx][cy]) continue;
            q.push({cx,cy});
            visited[cx][cy]=1;
            sum += board[cx][cy];
        }
    }
    answer.push_back(sum);
}

vector<int> solution(vector<string> maps) {
    n = maps.size();
    for (int i=0; i<n; i++) {
        m = maps[i].size();
        for (int j=0; j<m; j++) {
            if (maps[i][j]=='X') continue;
            else board[i][j] = maps[i][j] - '0';
        }
    }
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (board[i][j] && !visited[i][j]) bfs(i,j);
        }
    }
    
    if (answer.empty()) answer.push_back(-1);
    else sort(answer.begin(),answer.end());
    return answer;
}