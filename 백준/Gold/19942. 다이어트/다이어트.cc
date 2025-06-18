#include <bits/stdc++.h>
using namespace std;

int n,mp,mf,ms,mv,mc=1e9;
struct M {
    int p,f,s,v,c;
};
M st[16];

vector<int> ans;

void oper(char ch, M& m, int i) {
    m.p += (ch=='+' ? st[i].p : -1 * st[i].p);
    m.f += (ch=='+' ? st[i].f : -1 * st[i].f);
    m.s += (ch=='+' ? st[i].s : -1 * st[i].s);
    m.v += (ch=='+' ? st[i].v : -1 * st[i].v);
    m.c += (ch=='+' ? st[i].c : -1 * st[i].c);
}

void dfs(int x, int d, M m, vector<int> v) {
    if (d!=0) {
        if (m.p>=mp && m.f>=mf && m.s>=ms && m.v>=mv) {
            if (m.c<mc) {
                mc = m.c;
                ans = v;
            }
        }
        if (d==n) return;
    }
    for (int i=x; i<=n; i++) {
        oper('+',m,i);
        v.push_back(i);
        dfs(i+1,d+1,m,v);
        v.pop_back();
        oper('-',m,i);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> mp >> mf >> ms >> mv;
    for (int i=1; i<=n; i++) {
        cin >> st[i].p >> st[i].f >> st[i].s >> st[i].v >> st[i].c;
    }
    M tmp = {0,0,0,0,0};
    dfs(1,0,tmp,vector<int>());
    if (mc==1e9) {
        cout << -1;
        return 0;
    }
    cout << mc << '\n';
    for (auto i:ans) cout << i << ' ';
}