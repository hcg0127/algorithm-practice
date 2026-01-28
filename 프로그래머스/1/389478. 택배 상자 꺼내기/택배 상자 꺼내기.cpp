#include <bits/stdc++.h>

using namespace std;

int solution(int n, int w, int num) {
    int ans=0, h=(n-1)/w, r=(num-1)/w, c=0;
    
    if (r%2) c = w-1 - ((num-1)%w);
    else c = (num-1)%w;
    
    for (int i=r; i<=h; i++) {
        int box=0;
        if (i%2) box = (i+1)*w - c;
        else box = i*w + c +1;
        
        if (box<=n) ans++;
    }
    
    return ans;
}