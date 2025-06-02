#include <bits/stdc++.h>
#define pii pair<int,int>
using namespace std;

int n,m,dx[4]={0,1,0,-1},dy[4]={1,0,-1,0},ans;
string str;
bool board[50][50],visited[50][50]; // L,W

void bfs(int a, int b) {
    queue<pair<pii,int>> q;
    int tmp=0;
    q.push({{a,b},0});
    visited[a][b]=1;
    while (!q.empty()) {
        auto [xy,c] = q.front();
        q.pop();
        for (int i=0; i<4; i++) {
            int cx=xy.first+dx[i],cy=xy.second+dy[i];
            if (cx<0 || cy<0 || cx>=n || cy>=m || visited[cx][cy] || !board[cx][cy]) continue;
            q.push({{cx,cy},c+1});
            visited[cx][cy]=1;
            tmp=max(tmp,c+1);
        }
    }
    ans = max(ans,tmp);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> m;
    for (int i=0; i<n; i++) {
        cin >> str;
        for (int j=0; j<m; j++) board[i][j] = (str[j]=='L' ? 1 : 0);
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (board[i][j]) {
                bfs(i,j);
                fill(&visited[0][0],&visited[50][0],0);
            }
        }
    }
    cout << ans;
}