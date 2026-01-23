#include <bits/stdc++.h>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer;
    map<string,int> rank;
    map<int,string> name;
    int n = players.size();
    for (int i=0; i<n; i++) {
        rank[players[i]]=i+1;
        name[i+1]=players[i];
    }
    for (auto str : callings) {
        int str_rank = rank[str], chg_rank = str_rank-1;
        string chg_name = name[chg_rank];
        rank[str]--;
        rank[chg_name]++;
        name[str_rank] = chg_name;
        name[chg_rank] = str;
    }
    for (auto p : name) answer.push_back(p.second);
    return answer;
}