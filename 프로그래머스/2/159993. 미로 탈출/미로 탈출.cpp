#include <bits/stdc++.h>
#define pii pair<int,int>

using namespace std;
int ans,n,m;
int board[100][100];
int dx[4]={0,1,0,-1}, dy[4]={1,0,-1,0},visited[100][100];

int bfs(int fx, int fy, int tx, int ty) {
    fill(&visited[0][0],&visited[100][0],-1);
    queue<pii> q;
    q.push({fx,fy});
    visited[fx][fy]=0;
    while (!q.empty()) {
        auto [x,y] = q.front();
        q.pop();
        if (x==tx && y==ty) return visited[x][y];
        for (int i=0; i<4; i++) {
            int cx=x+dx[i], cy=y+dy[i];
            if (cx<0 || cy<0 || cx>=n || cy>=m || board[cx][cy]==-1 || visited[cx][cy]!=-1) continue;
            q.push({cx,cy});
            visited[cx][cy]=visited[x][y]+1;
        }
    }
    return -1;
}

int solution(vector<string> maps) {
    int sx,sy,lx,ly,ex,ey;
    n = maps.size();
    m = maps[0].size();
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (maps[i][j]=='O') board[i][j]=0;
            else if (maps[i][j]=='X') board[i][j]=-1;
            else if (maps[i][j]=='L') {
                board[i][j]=1;
                lx=i;
                ly=j;
            }
            else if (maps[i][j]=='E') {
                board[i][j]=2;
                ex=i;
                ey=j;
            }
            else {
                sx=i;
                sy=j;
            }
        }
    }
    
    int sl = bfs(sx,sy,lx,ly);
    if (sl==-1) return -1;
    int le = bfs(lx,ly,ex,ey);
    if (le==-1) return -1;
    return sl+le;
}