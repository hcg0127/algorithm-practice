#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<string> v = {"left", "up", "right", "down"};
    int dx[4]={-1,0,1,0}, dy[4]={0,1,0,-1}, n=board[0], m=board[1], x=0, y=0;
    for (auto s : keyinput) {
        int pos=find(v.begin(),v.end(),s)-v.begin(),cx=x+dx[pos],cy=y+dy[pos];
        if (cx<-1*(n/2) || cy<-1*(m/2) || cx>n/2 || cy>m/2) continue;
        x+=dx[pos];
        y+=dy[pos];
    }
    return vector<int>{x,y};
}