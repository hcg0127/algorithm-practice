#include <bits/stdc++.h>
using namespace std;

int n,k,cnt[100001],fast[100001];

void bfs() {
    deque<int> dq;
    dq.push_front(n);
    cnt[n]=0;
    fast[n]=1;
    while (!dq.empty()) {
        int cur = dq.front();
        dq.pop_front();
        for (auto i : {cur-1, cur+1, cur*2}) {
            if (i<0 || i>100000) continue;
            if (cnt[i]==-1) {
                cnt[i] = cnt[cur]+1;
                fast[i] = fast[cur];
                dq.push_back(i);
            } else if (cnt[i]==cnt[cur]+1) fast[i] += fast[cur];
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> k;
    fill(cnt,cnt+100001,-1);
    bfs();
    cout << cnt[k] << '\n' << fast[k];
}