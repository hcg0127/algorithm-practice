#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> vec(10,vector<int>(10));
int n,ans;

bool feas(int r, int col) {
    for (int row=0; row<r; row++) {
        int distance = r - row;

        if (vec[row][col]) return false;

        if (col - distance >= 0 && vec[row][col - distance]) return false;

        if (col + distance < n && vec[row][col + distance]) return false;
    }

    return true;
}

void back(int r) {
    if (r==n) {
        ans++;
        return;
    }
    for (int i=0; i<n; i++) {
        if (feas(r,i)) {
            vec[r][i] = 1;
            back(r+1);
            vec[r][i] = 0;
        }
    }
}

int main() {
    int t;
    cin >> t;
    
    for (int tc=1; tc<=t; tc++) {
        cin >> n;
        ans = 0;
        
        vec.assign(n, vector<int>(n, 0));
        back(0);
        
        cout << "#" << tc << " " << ans << '\n';
    }
}