#include <bits/stdc++.h>
using namespace std;

string str;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    while (true) {
        cin >> str;
        if (str.compare("end")==0) break;
        int ss=str.size(),v=0,c=0;
        bool bad=0,vow=0,thr=0,db=0;
        for (int i=0; i<ss; i++) {
            char ch = str[i], prev;
            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') {
                vow=1;
                if (v==2) {
                    thr=1;
                    break;
                } else {
                    c=0;
                    v++;
                }
            } else {
                if (c==2) {
                    thr=1;
                    break;
                } else {
                    v=0;
                    c++;
                }
            }
            if (i!=0) {
                prev = str[i-1];
                if (ch==prev && ch!='e' && ch!='o') {
                    db=1;
                    break;
                }
            }

        }
        cout << '<' + str + "> is " + (bad || !vow || thr || db ? "not " : "") + "acceptable.\n";
    }
}