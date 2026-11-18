#include <iostream>
using namespace std;

int n,m;

int dfs(int cur_n, int cur_m) {
    if (cur_m == m) {
        return cur_n;
    }
    dfs(cur_n*n,cur_m+1);
}

int main() {
    for (int tc=1; tc<=10; tc++) {
        int t;
        cin >> t;
        
        cin >> n >> m;
        
        cout << "#" << t << " " << dfs(1,0) << '\n';
    }
}