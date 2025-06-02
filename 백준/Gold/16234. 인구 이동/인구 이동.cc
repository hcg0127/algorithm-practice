#include <bits/stdc++.h>
#define pii pair<int,int>
using namespace std;

int n,l,r,board[50][50],dx[4]={0,1,0,-1},dy[4]={1,0,-1,0},ans;
vector<pii> un;
bool visited[50][50];

void bfs(int a, int b) {
    queue<pii> q;
    int sum = board[a][b], cnt = 1;
    un.clear();
    un.push_back({a,b});
    q.push({a,b});
    visited[a][b]=1;
    while (!q.empty()) {
        auto [x,y] = q.front();
        q.pop();
        for (int i=0; i<4; i++) {
            int cx=x+dx[i],cy=y+dy[i],dif=abs(board[cx][cy]-board[x][y]);
            if (cx<0 || cy<0 || cx>=n || cy>=n || visited[cx][cy] || dif<l || dif>r) continue;
            un.push_back({cx,cy});
            q.push({cx,cy});
            visited[cx][cy]=1;
            sum += board[cx][cy];
            cnt++;
        }
    }
    for (auto [x,y]:un) board[x][y]=sum/cnt;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> l >> r;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) cin >> board[i][j];
    }

    while (true) {
        int cnt=0;
        fill(&visited[0][0],&visited[50][0],0);
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                if (!visited[i][j]) {
                    bfs(i,j);
                    cnt++;
                }
            }
        }
        
        if (cnt==n*n) {
            cout << ans;
            return 0;
        }
        ans++;
    }
}