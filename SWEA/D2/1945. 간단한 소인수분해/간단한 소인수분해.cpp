#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    int num[5] = {2,3,5,7,11};
    for (int tc=1; tc<=t; tc++) {
        int n;
        cin >> n;
        
        vector<int> vec(12);
        for (auto i : num) {
            int tmp = n;
            
            while (1) {
                if (tmp%i) break;
                vec[i]++;
                tmp/=i;
            }
        }
        
        cout << "#" << tc << " ";
        for (auto i : num) cout << vec[i] << " ";
        cout << '\n';
    }
}