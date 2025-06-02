#include <bits/stdc++.h>
#define pii pair<int,int>
using namespace std;

int r,c,board[1000][1000],jx,jy,dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};
string str;
bool visited[1000][1000];
vector<pair<pii,int>> v;

void bfs(int a, int b) {
    queue<pii> q;
    fill(&visited[0][0],&visited[1000][0],0);
    q.push({a,b});
    visited[a][b]=1;
    while (!q.empty()) {
        auto [x,y] = q.front();
        q.pop();
        for (int i=0; i<4; i++) {
            int cx=x+dx[i],cy=y+dy[i];
            if (cx<0 || cy<0 || cx>=r || cy>=c || visited[cx][cy] || board[cx][cy]==-1 || board[cx][cy]==1) continue;
            if (a==3 && b==4) cout << cx << '&' << cy << ": " << board[cx][cy] << "?\n";
            q.push({cx,cy});
            visited[cx][cy]=1;
            if (board[cx][cy]>1)
                board[cx][cy] = min(board[cx][cy],board[x][y]+1);
            else
                board[cx][cy] = board[x][y]+1;
        }
    }
}

void move(int a, int b) {
    queue<pair<pii,int>> q;
    fill(&visited[0][0],&visited[1000][0],0);
    q.push({{a,b},1});
    visited[a][b]=1;
    while (!q.empty()) {
        auto [xy,cnt] = q.front();
        q.pop();
        for (int i=0; i<4; i++) {
            int cx=xy.first+dx[i],cy=xy.second+dy[i];
            if (cx<0 || cy<0 || cx>=r || cy>=c || visited[cx][cy] || board[cx][cy]==-1 || (board[cx][cy]>0 && board[cx][cy]<=cnt+1)) continue;
            q.push({{cx,cy},cnt+1});
            visited[cx][cy]=1;
            if (cx==0 || cy==0 || cx==r-1 || cy==c-1) v.push_back({{cx,cy},cnt+1});
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> r >> c;
    for (int i=0; i<r; i++) {
        cin >> str;
        for (int j=0; j<c; j++) {
            switch (str[j])
            {
            case 'J':
                jx=i;
                jy=j;
                break;
            case '#':
                board[i][j]=-1;
                break;
            case 'F':
                board[i][j]=1;
                break;
            default:
                break;
            }
        }
    }

    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) if (board[i][j]==1) bfs(i,j);
    }

    move(jx,jy);
    if (jx==0 || jy==0 || jx==r-1 || jy==c-1) cout << 1;
    else if (v.empty()) cout << "IMPOSSIBLE";
    else {
        int ans=1e9;
        for (auto i:v) ans=min(ans,i.second);
        cout << ans;
    }
}