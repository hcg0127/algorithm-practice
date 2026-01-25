#include <bits/stdc++.h>
#define pii pair<int,int>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    int x = wallpaper.size(), y = wallpaper[0].size(), lux=50, luy=50, rdx=0, rdy=0;
    for (int i=0; i<x; i++) {
        for (int j=0; j<y; j++) {
            if (wallpaper[i][j]=='#') {
                lux = min(lux,i);
                rdx = max(rdx,i+1);
                luy = min(luy,j);
                rdy = max(rdy,j+1);
            }
        }
    }
    return vector<int>{lux,luy,rdx,rdy};
}