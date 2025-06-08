#include <bits/stdc++.h>
#define pii pair<int,int>
using namespace std;

int n,m,h,a,b,ans=1e9;
bool visited[11][31];

bool ladder() {
    for (int i=1; i<=n; i++) {
        int tmp = i;
        for (int j=1; j<=h; j++) {
            if (visited[tmp][j]) tmp+=1;
            else if (visited[tmp-1][j]) tmp-=1;
        }
        if (tmp!=i) return false;
    }
    return true;
}

void back(int x, int d) {
    if (d>3) return;
    if (ladder()) {
        ans = min(ans,d);
        return;
    }
    for (int i=x; i<=h; i++) {
        for (int j=1; j<n; j++) {
            if (visited[j][i] || visited[j-1][i] || visited[j+1][i]) continue;
            visited[j][i]=1;
            back(i,d+1);
            visited[j][i]=0;
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> m >> h;
    for (int i=0; i<m; i++) {
        cin >> a >> b;
        visited[b][a]=1;
    }

    back(1,0);

    cout << (ans==1e9 ? -1 : ans);
}