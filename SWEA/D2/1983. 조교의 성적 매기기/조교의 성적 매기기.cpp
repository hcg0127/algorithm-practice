#include <bits/stdc++.h>
#define pii pair<int,int>
using namespace std;

int main() {
    string s[10] = {"A+", "A0", "A-", "B+", "B0", "B-", "C+", "C0", "C-", "D0"};
    int t;
    cin >> t;
    
    for (int tc=1; tc<=t; tc++) {
        int n,k,rank;
        cin >> n >> k;
        
        vector<pii> ks;
        for (int i=0; i<n; i++) {
            int a,b,c;
            cin >> a >> b >> c;
            int sum = a * 35 + b * 45 + c * 20;
            ks.push_back({-sum,i+1});
        }
        sort(ks.begin(),ks.end());
        
        for (int i=0; i<n; i++) {
            auto [a,b] = ks[i];
            if (b==k) rank = i;
        }
        
        cout << "#" << tc << " " << s[rank/(n/10)] << '\n';
    }
}