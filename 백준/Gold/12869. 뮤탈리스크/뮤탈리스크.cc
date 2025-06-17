#include <bits/stdc++.h>
#define pii pair<int,int>
using namespace std;

int n,arr[3],mu[6][3]={{9,3,1},{9,1,3},{3,9,1},{3,1,9},{1,9,3},{1,3,9}},visited[61][61][61];

void bfs() {
    queue<pair<pii,int>> q;
    q.push({{arr[0],arr[1]},arr[2]});
    visited[arr[0]][arr[1]][arr[2]]=1;
    while(!q.empty()) {
        auto [a,b] = q.front();
        q.pop();
        if (visited[0][0][0]) break;
        for (int i=0; i<6; i++) {
            int cx=max(0,a.first-mu[i][0]),cy=max(0,a.second-mu[i][1]),cz=max(0,b-mu[i][2]);
            if (visited[cx][cy][cz]) continue;
            q.push({{cx,cy},cz});
            visited[cx][cy][cz]=visited[a.first][a.second][b]+1;
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n;
    for (int i=0; i<n; i++) cin >> arr[i];
    bfs();
    cout << visited[0][0][0]-1;
}