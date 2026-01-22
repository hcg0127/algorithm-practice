#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> bandage, int health, vector<vector<int>> attacks) {
    int answer = 0, st=0, en=attacks.back()[0], con=0, hp=health;
    map<int,int> m;
    for (auto v : attacks) {
        m[v[0]]=v[1];
    }
    while (st<en) {
        st++;
        if (m[st]==0) {
            con++;
            hp = min(health,hp+bandage[1]);
            if (con==bandage[0]) {
                con=0;
                hp = min(health,hp+bandage[2]);
            }
        } else {
            con=0;
            hp-=m[st];
            if (hp<=0) return -1;
        }
    }
    return hp;
}