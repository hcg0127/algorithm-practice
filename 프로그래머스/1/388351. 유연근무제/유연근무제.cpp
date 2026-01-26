#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> schedules, vector<vector<int>> timelogs, int startday) {
    int answer=0, n=timelogs.size();
    for (int i=0; i<n; i++) {
        int sd=startday-1, cnt=0, hp=schedules[i];
        hp += 10;
        if ((hp%100)>59) {
            hp-=60;
            hp+=100;
        }
        for (int j=0; j<7; j++) {
            sd++;
            if (sd>7) sd -= 7;
            if (sd==6 || sd==7) continue;
            int t=timelogs[i][j];
            if (t<=hp) cnt++;
        }
        if (cnt==5) answer++;
    }
    return answer;
}