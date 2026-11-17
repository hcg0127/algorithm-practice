#include <bits/stdc++.h>
using namespace std;

int num,cnt,ans;
vector<unordered_set<string>> visited;

void back(string num, int curcnt) {
    if (visited[curcnt].count(num)) return;
    visited[curcnt].insert(num);
    
    if (curcnt == cnt) {
        ans = max(ans,stoi(num));
        return;
    }
    
    int ss = num.size();
    
    for (int i=0; i<ss-1; i++) {
        for (int j=i+1; j<ss; j++) {
            swap(num[i],num[j]);
            back(num, curcnt+1);
            swap(num[i],num[j]);
        }
    }
}

int main() {
    int t;
    cin >> t;
    
    for (int tc=1; tc<=t; tc++) {
        cin >> num >> cnt;
        
        ans = 0;
        visited.assign(cnt + 1, {});
        
        back(to_string(num),0);
        
        cout << "#" << tc << " " << ans << '\n';
    }
}