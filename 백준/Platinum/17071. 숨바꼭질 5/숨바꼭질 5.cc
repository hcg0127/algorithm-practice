#include <bits/stdc++.h>
using namespace std;

int n,k,d=1,visited[2][500001];
bool flag;

void bfs() {
    queue<int> q;
    q.push(n);
    visited[0][n]=1;
    while (!q.empty()) {
        k += d;
        if (k>500000) break;
        if (visited[d%2][k]) {
            flag = 1;
            break;
        }
        int qs = q.size();
        for (int i=0; i<qs; i++) {
            int cur = q.front();
            q.pop();
            for (auto i : {cur-1, cur+1, cur*2}) {
                if (i<0 || i>500000 || visited[d%2][i]) continue;
                visited[d%2][i]=visited[(d+1)%2][cur]+1;
                if (i==k) {
                    flag = 1;
                    return;
                }
                q.push(i);
            }
        }
        d++;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> k;
    if (n==k) {
        cout << 0;
        return 0;
    }
    bfs();
    cout << (flag ? d : -1);
}