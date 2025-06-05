#include <bits/stdc++.h>
#define pii pair<int,int>
using namespace std;

int n,board[10][10],mn=1e9;
vector<pii> bloom,dir={{0,0},{1,0},{-1,0},{0,1},{0,-1}};
bool visited[10][10];

bool onoff(int a, int b) {
    for (auto [dx,dy] : dir) {
        if (visited[a+dx][b+dy])  return 0;
    }
    return 1;
}

void back(int d) {
    if (d==3) {
        int tmp = 0;
        for (auto [a,b] : bloom) {
            for (auto [dx,dy] : dir) tmp += board[a+dx][b+dy];
        }
        mn = min(tmp,mn);
        return;
    }
    for (int i=1; i<n-1; i++) {
        for (int j=1; j<n-1; j++) {
            if (!visited[i][j] && onoff(i,j)) {
                for (auto [dx,dy] : dir) visited[i+dx][j+dy] = 1;
                bloom.push_back({i,j});
                back(d+1);
                bloom.pop_back();
                for (auto [dx,dy] : dir) visited[i+dx][j+dy]=0;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) cin >> board[i][j];
    }
    back(0);
    cout << mn;
}