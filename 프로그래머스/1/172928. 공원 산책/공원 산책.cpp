#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    int x = park.size(), y = park[0].size(), sx, sy, dx[4]={-1,0,1,0}, dy[4]={0,1,0,-1};
    map<string,int> d = {{"N",0}, {"E",1}, {"S",2}, {"W",3}};
    for (int i=0; i<x; i++) {
        for (int j=0; j<y; j++) {
            if (park[i][j]=='S') {
                sx = i;
                sy = j;
            }
        }
    }
    for (auto str : routes) {
        stringstream ss(str);
        string a,b;
        ss >> a >> b;
        int dir=d[a], n=stoi(b), cx=sx, cy=sy;
        bool flag=0;
        for (int i=0; i<n; i++) {
            cx += dx[dir];
            cy += dy[dir];
            if (park[cx][cy]=='X' || cx<0 || cy<0 || cx>=x || cy>=y) {
                flag=1;
                break;
            }
        }
        if (flag) continue;
        sx=cx;
        sy=cy;
    }
    return vector<int>{sx,sy};
}