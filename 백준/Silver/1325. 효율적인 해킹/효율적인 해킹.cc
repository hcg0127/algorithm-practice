#include <bits/stdc++.h>
#define pii pair<int,int>
using namespace std;

int n,m,a,b,mx,cnt;
vector<int> edge[10001];
vector<pii> ans;
bool visited[10001];

void dfs(int cur) {
    visited[cur]=1;
    if (edge[cur].empty()) return;
    for (auto i:edge[cur]) {
        if (visited[i]) continue;
        cnt++;
        dfs(i);
    }
}

bool cmp(pii a, pii b) {
    if (a.second==b.second) return a.first<b.first;
    else return a.second>b.second;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> m;
    for (int i=1; i<=m; i++) {
        cin >> a >> b;
        edge[b].push_back(a);
    }

    for (int i=1; i<=n; i++) {
        cnt=1;
        fill(&visited[0],&visited[10001],0);
        dfs(i);
        ans.push_back({i,cnt});
        mx = max(mx,cnt);
    }

    sort(ans.begin(),ans.end(),cmp);
    for (auto [x,y] : ans) {
        if (y!=mx) break;
        cout << x << ' ';
    }
}