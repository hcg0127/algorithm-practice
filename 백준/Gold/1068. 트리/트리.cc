#include <bits/stdc++.h>
using namespace std;

int n,x,del,ans,rt;
vector<int> edge[50];

void search(int cur) {
    if (!edge[cur].size()) {
        ans++;
        return;
    }
    for (auto i:edge[cur]) search(i);
}

void cut(int cur) {
    int es=edge[cur].size();
    for (int i=0; i<es; i++) {
        if (edge[cur][i]==del) {
            edge[cur].erase(edge[cur].begin() + i);
            return;
        }
        cut(edge[cur][i]);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> x;
        if (x!=-1) edge[x].push_back(i);
        else rt=i;
    }
    cin >> del;
    cut(rt);
    search(rt);
    cout << (del==rt ? 0 : ans);
}