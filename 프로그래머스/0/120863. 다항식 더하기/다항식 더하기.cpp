#include <bits/stdc++.h>

using namespace std;

string solution(string polynomial) {
    stringstream ss(polynomial);
    string tmp,ans="";
    char oper;
    int coe=0,con=0;
    while (ss >> tmp) {
        if (tmp[0]==' ' || tmp[0]=='+') continue;
        if (tmp[tmp.size()-1]=='x') coe += tmp.size()!=1 ? stoi(tmp.substr(0,tmp.size()-1)) : 1;
        else con += stoi(tmp);
    }
    if (coe!=0) {
        ans += (coe!=1 ? to_string(coe) : "") + 'x';
        if (con!=0) ans += " + " + to_string(con);
    } else ans += to_string(con);
    return ans;
}