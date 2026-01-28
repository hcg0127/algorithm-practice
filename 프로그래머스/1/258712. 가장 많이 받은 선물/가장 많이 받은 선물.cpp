#include <bits/stdc++.h>

using namespace std;

int board[50][50], f[50];

int solution(vector<string> friends, vector<string> gifts) {
    int ans=0, n=friends.size();
    map<string,int> fi;
    vector<int> v(n,0);
    for (int i=0; i<n; i++) fi[friends[i]]=i;
    for (auto str : gifts) {
        stringstream ss(str);
        string a,b;
        ss >> a >> b;
        int x=fi[a], y=fi[b];
        board[x][y]++;
        f[x]++;
        f[y]--;
    }
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            if (board[i][j]==0 && board[j][i]==0 || board[i][j]==board[j][i]) {
                if (f[i]==f[j]) continue;
                else if (f[i]>f[j]) v[i]++;
                else v[j]++;
            } else {
                if (board[i][j]>board[j][i]) v[i]++;
                else v[j]++;
            }
        }
    }
    return *max_element(v.begin(),v.end());
}