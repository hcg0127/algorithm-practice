#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    string tab[10] = {"0001101", "0011001", "0010011", "0111101", "0100011", "0110001", "0101111", "0111011", "0110111", "0001011"};
    for (int tc=1; tc<=t; tc++) {
        int n,m;
        cin >> n >> m;
        
        vector<string> vec(n);
        for (int i=0; i<n; i++) {
            cin >> vec[i];
        }
        
        int row=-1, col=-1;
        
        for (int i = 0; i < n && row == -1; i++) {
            for (int j = m - 1; j >= 0; j--) {
                if (vec[i][j] == '1') {
                    row = i;
                    col = j;
                    break;
                }
            }
        }
        
        vector<int> num;
        for (int i=col-55; i<=col; i+=7) {
            string tmp = vec[row].substr(i,7);
            for (int j=0; j<10; j++) {
                if (tmp.compare(tab[j])==0) {
                    num.push_back(j);
                    break;
                }
            }
        }
        
        int od=0, ev=0;
        for (int i=0; i<8; i++) {
            if (i%2) ev += num[i];
            else od += num[i];
        }
            
        cout << "#" << tc << " ";
        cout << ((od*3+ev)%10==0 ? od+ev : 0);
        cout << '\n';
    }
}