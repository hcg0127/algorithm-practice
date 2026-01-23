#include <bits/stdc++.h>

using namespace std;

bool board[1001][1001];
bool flag[1001];

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    map<string,int> cnt, id;
    int ids = id_list.size();
    vector<int> ans(ids,0);
    for (int i=0; i<ids; i++) {
        id[id_list[i]]=i;
    }
    sort(report.begin(),report.end());
    report.erase(unique(report.begin(),report.end()),report.end());
    for (auto str : report) {
        stringstream ss(str);
        string a,b;
        ss >> a >> b;
        board[id[a]][id[b]]=1;
        if (++cnt[b]>=k) flag[id[b]]=1;
    }
    for (int i=0; i<ids; i++) {
        for (int j=0; j<ids; j++) {
            if (board[i][j]==1 && flag[j]) ans[i]++;
        }
    }
    return ans;
}