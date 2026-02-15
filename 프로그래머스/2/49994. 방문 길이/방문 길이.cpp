#include <bits/stdc++.h>
#define pii pair<int,int>
using namespace std;

int solution(string dirs) {
    int answer = 0, x=0,y=0, dx[4]={0,1,0,-1}, dy[4]={1,0,-1,0}, d;
    set<pair<pii,pii>> s;
    vector<pii> v;
    v.push_back({0,0});
    for (auto ch : dirs) {
        if (ch=='U') d=1;
        else if (ch=='D') d=3;
        else if (ch=='L') d=2;
        else d=0;
        int cx = x+dx[d], cy = y+dy[d];
        if (cx<-5 || cy<-5 || cx>5 || cy>5) continue;
        v.push_back({cx,cy});
        x = cx;
        y = cy;
    }
    int vs = v.size();
    for (int i=0; i<vs-1; i++) {
        s.insert({v[i],v[i+1]});
        s.insert({v[i+1],v[i]});
    }
    return s.size()/2;
}