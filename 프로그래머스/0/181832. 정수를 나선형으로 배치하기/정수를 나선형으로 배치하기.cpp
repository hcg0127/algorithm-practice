#include <bits/stdc++.h>

using namespace std;
bool visited[30][30];

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer(n,vector<int>(n,0));
    int d=0,x=0,y=0,cnt=1,dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};
    while (cnt<=n*n) {
        answer[x][y]=cnt++;
        visited[x][y]=1;
        if (visited[x+dx[d]][y+dy[d]] || x+dx[d]<0 || x+dx[d]>=n || y+dy[d]<0 || y+dy[d]>=n) d=(d+1)%4;
        x+=dx[d];
        y+=dy[d];
    }
    return answer;
}