#include <bits/stdc++.h>
using namespace std;

int main() {
    
    for (int tc=1; tc<=10; tc++) {
        int n;
        cin >> n;
        
        vector<int> vec(100);
        for (int i=0; i<100; i++) {
            cin >> vec[i];
        }
        
        for (int i=0; i<n; i++) {
            sort(vec.begin(),vec.end());
            vec[0]++;
            vec[99]--;
        }
        
        sort(vec.begin(),vec.end());
        cout << "#" << tc << " " << vec[99]-vec[0] << '\n';
    }
}