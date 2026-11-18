#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    for (int tc=1; tc<=t; tc++) {
        int h,w;
        cin >> h >> w;
        
        int r,c,d,dx[4]={-1,1,0,0},dy[4]={0,0,-1,1};
        vector<vector<char>> vec(h,vector<char>(w));
        for (int i=0; i<h; i++) {
            string s;
            cin >> s;
            
            for (int j=0; j<w; j++) {
                vec[i][j] = s[j];
                if (s[j]=='^' || s[j]=='v' || s[j]=='<' || s[j]=='>') {
                    vec[i][j] = '.';
                    r=i;
                    c=j;
                    if (s[j]=='^') d=0;
                    else if (s[j]=='v') d=1;
                    else if (s[j]=='<') d=2;
                    else d=3;
                }
            }
        }
        
        int n;
        cin >> n;
        string commands;
        cin >> commands;
        
        for (auto com : commands) {
            if (com=='S') {
                int tr=r, tc=c;
                while (1) {
                    tr += dx[d];
                    tc += dy[d];
                    if (tr<0 || tc<0 || tr>=h || tc>=w || vec[tr][tc]=='#') break;
                    if (vec[tr][tc]=='*') {
                        vec[tr][tc] = '.';
                        break;
                    }
                }
            } else {
                if (com=='U') {
                	d = 0;
            	} else if (com=='D') {
                	d = 1;
            	} else if (com=='L') {
                	d = 2;
            	} else {
                	d = 3;
            	}
                int nr = r+dx[d], nc = c+dy[d];
                if (nr<0 || nc<0 || nr>=h || nc>=w || vec[nr][nc]!='.') continue;
                r += dx[d];
                c += dy[d];
            }
            
        }
        
        cout << "#" << tc << " ";
        for (int i=0; i<h; i++) {
            for (int j=0; j<w; j++) {
                if (r==i && c==j) {
                    if (d==0) cout << '^';
                    else if (d==1) cout << 'v';
                    else if (d==2) cout << '<';
                    else cout << '>';
                } else cout << vec[i][j];
            }
            cout << '\n';
        }
    }
}