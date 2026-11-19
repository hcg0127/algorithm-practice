#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n,m,ans;
vector<vector<int>> edge(20,vector<int>());
bool visited[20];

void dfs(int cnt, int start) {
    ans = max(ans,cnt);
    for (auto i : edge[start]) {
        if (!visited[i]) {
            visited[i] = 1;
            dfs(cnt+1,i);
            visited[i] = 0;
        }
    }
}

int main() {
    int t;
    cin >> t;
    
    for (int tc=1; tc<=t; tc++) {
        cin >> n>> m;
        
        ans = 1;
        edge.assign(20,{});
        for (int i=0; i<m; i++) {
            int x,y;
            cin >> x >> y;
            
            edge[x].push_back(y);
            edge[y].push_back(x);
        }
        
        for (int i=0; i<n; i++) {
            fill(visited,visited+20,0);
            dfs(0,i);
        }
        
        cout << "#" << tc << " " << ans << '\n';
    }
}