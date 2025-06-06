#include <bits/stdc++.h>
#define pii pair<int,int>
using namespace std;

int r,c,dx[4]={0,1,0,-1},dy[4]={1,0,-1,0},ans;
string str;
pii sst,snd;
bool board[1500][1500],visited[1500][1500],flag;
queue<pii> sw_q,sw_nq,wa_q,wa_nq;

void wa_bfs() {
    while (!wa_q.empty()) {
        auto [x,y] = wa_q.front();
        wa_q.pop();
        for (int i=0; i<4; i++) {
            int cx=x+dx[i],cy=y+dy[i];
            if (cx<0 || cy<0 || cx>=r || cy>=c) continue;
            if (board[cx][cy]) {
                wa_nq.push({cx,cy});
                board[cx][cy]=0;
            }
        }
    }
}

bool sw_bfs() {
    while (!sw_q.empty()) {
        auto [x,y] = sw_q.front();
        sw_q.pop();
        for (int i=0; i<4; i++) {
            int cx=x+dx[i],cy=y+dy[i];
            if (cx<0 || cy<0 || cx>=r || cy>=c || visited[cx][cy]) continue;
            visited[cx][cy]=1;
            if (cx==snd.first && cy==snd.second) return true;
            else if (board[cx][cy]) sw_nq.push({cx,cy});
            else sw_q.push({cx,cy});
        }
    }
    return false;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> r >> c;
    for (int i=0; i<r; i++) {
        cin >> str;
        for (int j=0; j<c; j++) {
            if (str[j]=='.') wa_q.push({i,j});
            else if (str[j]=='X') board[i][j]=1;
            else {
                wa_q.push({i,j});
                if (!flag) {
                    flag = 1;
                    sst = {i,j};
                } else snd = {i,j};
            }
        }
    }

    sw_q.push({sst.first,sst.second});
    visited[sst.first][sst.second]=1;
    while (true) {
        if (sw_bfs()) break;
        else {
            wa_bfs();
            wa_q = wa_nq;
            sw_q = sw_nq;
        }
        wa_nq = queue<pii>();
        sw_nq = queue<pii>();
        ans++;
    }
    cout << ans;
}