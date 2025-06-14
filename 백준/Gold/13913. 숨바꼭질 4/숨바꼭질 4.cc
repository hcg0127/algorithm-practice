#include <bits/stdc++.h>
using namespace std;

int n,k,cnt[100001],pre[100001];

void bfs() {
    deque<int> dq;
    dq.push_front(n);
    cnt[n]=0;
    pre[n]=-1;
    while (!dq.empty()) {
        int cur = dq.front();
        dq.pop_front();
        for (auto i : {cur-1, cur+1, cur*2}) {
            if (i<0 || i>100000 || cnt[i]!=-1) continue;
            cnt[i] = cnt[cur]+1;
            pre[i]=cur;
            dq.push_back(i);
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> k;
    fill(cnt,cnt+100001,-1);
    bfs();
    cout << cnt[k] << '\n';
    vector<int> path;
    for (int i=k; i!=-1; i=pre[i]) path.push_back(i);
    reverse(path.begin(),path.end());
    for (auto i:path) cout << i << ' ';
}