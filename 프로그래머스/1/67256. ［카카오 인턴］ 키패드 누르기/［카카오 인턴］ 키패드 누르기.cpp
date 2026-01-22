#include <bits/stdc++.h>
#define pii pair<int,int>

using namespace std;

string solution(vector<int> numbers, string hand) {
    string answer = "";
    vector<pii> pv = {{3,1},{0,0},{0,1},{0,2},{1,0},{1,1},{1,2},{2,0},{2,1},{2,2},{3,0},{3,2}};
    int l=10,r=11;
    for (auto num : numbers) {
        auto [x,y] = pv[num];
        auto [rx,ry] = pv[r];
        auto [lx,ly] = pv[l];
        if (num==1 || num==4 || num==7) {
            answer+="L";
            l=num;
        } else if (num==3 || num==6 || num==9) {
            answer+="R";
            r=num;
        } else {
            int tmp_l = abs(x-lx) + abs(y-ly);
            int tmp_r = abs(x-rx) + abs(y-ry);
            if (tmp_l==tmp_r && hand.compare("right")==0 || tmp_l>tmp_r) {
                answer += "R";
                r=num;
            } else {
                answer += "L";
                l=num;
            }
        }
    }
    return answer;
}