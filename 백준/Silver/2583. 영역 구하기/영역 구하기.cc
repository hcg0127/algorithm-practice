#include <bits/stdc++.h>
#define pii pair<int,int>
using namespace std;

int n,m,k,ldx,ldy,rux,ruy,board[100][100],cnt,dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};
bool visited[100][100];
vector<int> v;

void bfs(int a, int b) {
    queue<pii> q;
    q.push({a,b});
    visited[a][b]=1;
    int sum=0;
    while (!q.empty()) {
        auto [x,y] = q.front();
        q.pop();
        sum++;
        for (int i=0; i<4; i++) {
            int cx=x+dx[i],cy=y+dy[i];
            if (cx<0 || cy<0 || cx>=n || cy>=m || visited[cx][cy] || board[cx][cy]) continue;
            q.push({cx,cy});
            visited[cx][cy]=1;
        }
    }
    v.push_back(sum);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> m >> n >> k;
    while (k--) {
        cin >> ldx >> ldy >> rux >> ruy;
        for (int i=ldx; i<rux; i++) {
            for (int j=ldy; j<ruy; j++) board[i][j]++;
        }
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (board[i][j]==0 && !visited[i][j]) {
                bfs(i,j);
                cnt++;
            }
        }
    }

    cout << cnt << '\n';
    sort(v.begin(),v.end());
    for (auto i:v) cout << i << ' ';
}