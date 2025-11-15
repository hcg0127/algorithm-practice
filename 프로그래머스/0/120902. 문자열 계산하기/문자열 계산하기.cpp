#include <bits/stdc++.h>

using namespace std;

int solution(string my_string) {
    stringstream ss(my_string);
    string tmp;
    int ans=-1,d=-1;
    
    while (ss >> tmp) {
        if (tmp[0]=='+') d=0;
        else if (tmp[0]=='-') d=1;
        else {
            if (d==-1) ans=stoi(tmp);
            else if (d==0) ans+=stoi(tmp);
            else ans-=stoi(tmp);
        }
    }
    return ans;
}