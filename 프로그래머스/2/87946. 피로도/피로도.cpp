#include <bits/stdc++.h>

using namespace std;

int n,ans;
vector<vector<int>> deon;
bool visited[5000];

void back(int hp, int cnt) {
    ans = max(ans, cnt);
    
    for (int i=0; i<n; i++) {
        if (!visited[i] && hp>=deon[i][0]) {
            visited[i]=1;
            back(hp-deon[i][1], cnt+1);
            visited[i]=0;
        }
    }
}

int solution(int k, vector<vector<int>> dungeons) {
    n = dungeons.size();
    deon = dungeons;
    back(k,0);
    return ans==0 ? -1 : ans;
}