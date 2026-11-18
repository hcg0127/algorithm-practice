#include <bits/stdc++.h>
using namespace std;

int main() {
    for (int tc=1; tc<=10; tc++) {
        int t;
        cin >> t;
        
        deque<int> dq;
        for (int i=0; i<8; i++) {
            int x;
            cin >> x;
            
            dq.push_back(x);
        }
        
        int idx = 1;
        while (1) {
            if (idx==6) idx=1;
            
            int front = dq.front(), num = max(0, front-idx);
            dq.pop_front();
            dq.push_back(num);
            idx++;
            if (num==0) break;
        }
        
        cout << "#" << t << " ";
        for (auto i : dq) cout << i << " ";
        cout << '\n';
    }
}