#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    for (int tc=1; tc<=t; tc++) {
        int n;
        cin >> n;
        
        vector<int> vec(7);
        for (int i=0; i<7; i++) {
            cin >> vec[i];
        }
        
        int mn = 1e9;
        for (int day=0; day<7; day++) {
            int tmp = 0, idx = day, ans = 0;
            
            while (tmp<n) {
                if (vec[idx]) tmp++;
                ans++;
                idx = (idx+1) % 7;
            }
            
            mn = min(mn,ans);
        }
        
        cout << "#" << tc << " " << mn << '\n';
    }
}