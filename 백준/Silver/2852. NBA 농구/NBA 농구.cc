#include <bits/stdc++.h>
using namespace std;

int n,t,pm,ps,a_win,b_win,win,m[2],s[2];
string tim;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> t >> tim;
        int cm = stoi(tim.substr(0,2)), cs = stoi(tim.substr(3,2));
        if (i!=0 && win!=0) {
            m[(win==t ? t-1 : !(t-1))] += (cs-ps<0 ? cm-pm-1 : cm-pm);
            s[(win==t ? t-1 : !(t-1))] += ((cs-ps<0 ? (cs-ps+60)%60 : cs-ps));
        }
        t==1 ? a_win++ : b_win++;
        win = (a_win==b_win ? 0 : (a_win>b_win ? 1 : 2));
        pm = cm, ps = cs;
    }
    if (win!=0) {
        m[win-1] += (ps==0 ? 48-pm : 47-pm);
        s[win-1] += (60-ps)%60;
    }
    for (int i=0; i<2; i++) {
        if (s[i]>=60) {
            m[i]+=s[i]/60;
            s[i]%=60;
        }
        if (m[i]/10==0) cout << '0';
        cout << m[i] << ':';
        if (s[i]/10==0) cout << '0';
        cout << s[i] << '\n';
    }
}