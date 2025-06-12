#include <bits/stdc++.h>
#define pii pair<int,int>
using namespace std;

int n,k,ans=1e9;
bool visited[100001];

void bfs() {
    queue<pii> q;
    q.push({n,0});
    visited[n]=1;
    while (!q.empty()) {
        auto [x,y] = q.front();
        q.pop();
        for (int i : {x-1, x+1, x*2}) {
            if (i<0 || i>100000 || visited[i]) continue;
            if (i==k) ans = min(ans,y+1);
            else {
                q.push({i,y+1});
                visited[i]=1;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> k;
    bfs();
    cout << (ans==1e9 ? 0 : ans);
}