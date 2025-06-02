#include <bits/stdc++.h>
#define pii pair<int,int>
using namespace std;

int n,m,x,cs,ans=1e9;
vector<pii> chick,house,pick;

void back(int x, int d) {
    if (d==m) {
        int cnt = 0;
        for (auto i:house) {
            int mn,tmp = 1e9;
            for (auto j:pick) {
                mn = abs(i.first-j.first)+abs(i.second-j.second);
                tmp = min(mn,tmp);
            }
            cnt += tmp;
        }
        ans = min(ans,cnt);
        return;
    }
    for (int i=x; i<cs; i++) {
        auto [a,b] = chick[i];
        pick.push_back({a,b});
        back(i+1,d+1);
        pick.pop_back();
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> m;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cin >> x;
            if (x==2) chick.push_back({i,j});
            else if (x==1) house.push_back({i,j});
        }
    }

    cs = chick.size();
    back(0,0);
    cout << ans;
}