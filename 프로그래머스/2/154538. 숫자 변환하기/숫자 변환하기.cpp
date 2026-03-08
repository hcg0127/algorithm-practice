#include <bits/stdc++.h>

using namespace std;

int arr[1000001];

void bfs(int x, int y, int n) {
    queue<int> q;
    q.push(x);
    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        int cx[3] = {cur+n, cur*2, cur*3};
        for (int i=0; i<3; i++) {
            if (cx[i]<0 || cx[i]>y) continue;
            if (!arr[cx[i]] || arr[cx[i]] > arr[cur]+1) {
                arr[cx[i]] = arr[cur]+1;
                q.push(cx[i]);
            }
        }
    }
}

int solution(int x, int y, int n) {
    if (x==y) return 0;
    int answer = 0;
    bfs(x,y,n);
    return arr[y] ? arr[y] : -1;
}