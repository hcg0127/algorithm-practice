#include <bits/stdc++.h>
#define pii pair<int,int>
using namespace std;

int n,k,arr[100001],visited[100001];

void bfs(int x) {
  queue<int> q;
  q.push(x);
  arr[x]=1;
  visited[x]=1;
  while (!q.empty()) {
    int cur = q.front();
    q.pop();
    for (auto i : {cur-1,cur+1,cur*2}) {
        if (i<0 || i>100000) continue;
        if (!arr[i]) {
            q.push(i);
            arr[i]=arr[cur]+1;
            visited[i]+=visited[cur];
        } else if (arr[i]==arr[cur]+1) visited[i]+=visited[cur];
    }
  }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> k;
    if (n==k) {
        cout << 0 << '\n' << 1;
        return 0;
    }
    bfs(n);
    cout << arr[k]-1 << '\n' << visited[k];
}