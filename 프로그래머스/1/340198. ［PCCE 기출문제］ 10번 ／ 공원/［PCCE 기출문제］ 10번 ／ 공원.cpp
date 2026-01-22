#include <bits/stdc++.h>
#define pii pair<int,int>

using namespace std;

int solution(vector<int> mats, vector<vector<string>> park) {
    int answer = 0, a = park.size(), b = park[0].size();
    vector<pii> pv;
    sort(mats.begin(),mats.end(),greater<>());
    for (int i=0; i<a; i++) {
        for (int j=0; j<b; j++) if (park[i][j].compare("-1")==0) pv.push_back({i,j});
    }
    for (auto num : mats) {
        for (auto [x,y] : pv) {
            bool flag = 1;
            if (x+num>a || y+num>b) continue;
            for (int i=x; i<x+num; i++) {
                for (int j=y; j<y+num; j++) {
                    if (park[i][j].compare("-1")!=0) {
                        flag=0;
                        break;
                    }
                }
                if (!flag) break;
            }
            if (flag) return num;
        }
    }
    return -1;
}