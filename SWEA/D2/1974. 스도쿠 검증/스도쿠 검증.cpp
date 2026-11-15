#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        vector<vector<int>> vec(9, vector<int>(9));
        bool sudoku = 1;
        for (int i=0; i<9; i++) {
            for (int j=0; j<9; j++) {
                cin >> vec[i][j];
            }
        }
        
        for (int i=0; i<9; i++) {
            bool flag[10];
            fill(flag, flag+10, 0);
            
            for (int j=0; j<9; j++) {
                if (flag[vec[i][j]]) sudoku = 0;
                else flag[vec[i][j]] = 1;
            }
        }
        for (int j=0; j<9; j++) {
            bool flag[10];
            fill(flag, flag+10, 0);
            
            for (int i=0; i<9; i++) {
                if (flag[vec[i][j]]) sudoku = 0;
                else flag[vec[i][j]] = 1;
            }
        }
        
        for (int i=0; i<9; i+=3) {
            for (int j=0; j<9; j+=3) {
                bool flag[10];
                fill(flag, flag+10, 0);
                
                for (int a=i; a<i+3; a++) {
                    for (int b=j; b<j+3; b++) {
                        if (flag[vec[a][b]]) sudoku = 0;
                        else flag[vec[a][b]] = 1;
                    }
                }
            }
        }
        
        cout << "#" << tc << " " << sudoku <<'\n';
    }
}