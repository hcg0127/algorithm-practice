#include <bits/stdc++.h>
using namespace std;

int h,w,board[100][100];
string str;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> h >> w;
    fill(&board[0][0],&board[h][0],-1);
    for (int i=0; i<h; i++) {
        cin >> str;
        for (int j=0; j<w; j++) {
            if (str[j]=='c') {
                board[i][j] = 0;
                for (int k=j+1; k<w; k++) board[i][k] = board[i][k-1]+1;
            }
            cout << board[i][j] << ' ';
        }
        cout << '\n';
    }
}