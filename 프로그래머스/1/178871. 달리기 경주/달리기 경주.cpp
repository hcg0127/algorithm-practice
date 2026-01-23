#include <bits/stdc++.h>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    map<string,int> rank;
    int n = players.size();
    for (int i=0; i<n; i++) {
        rank[players[i]]=i+1;
    }
    for (auto str : callings) {
        int str_rank = rank[str]-1, chg_rank = str_rank-1;
        string chg_name = players[chg_rank];
        rank[str]--;
        rank[chg_name]++;
        players[str_rank] = chg_name;
        players[chg_rank] = str;
    }
    return players;
}