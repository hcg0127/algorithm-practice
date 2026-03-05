#include <bits/stdc++.h>
#define pii pair<int,int>

using namespace std;

string convert(string s) {
    string tmp = "";
    int ss = s.size();
    for (int i=0; i<ss; i++) {
        if (i+1<ss && s[i+1]=='#') {
            tmp += tolower(s[i]);
            i++;
        } else {
            tmp += s[i];
        }
    }
    return tmp;
}

string solution(string m, vector<string> musicinfos) {
    string answer = "(None)";
    m = convert(m);
    int ms = m.size(), time=0, ss = musicinfos.size();
    for (int i=0; i<ss; i++) {
        string str = musicinfos[i],start,end,name,notes,played="";
        stringstream ss(str);
        getline(ss,start,',');
        getline(ss,end,',');
        getline(ss,name,',');
        getline(ss,notes,',');
        
        notes = convert(notes);
        
        int st = stoi(start.substr(0,2)) * 60 + stoi(start.substr(3,2));
        int en = stoi(end.substr(0,2)) * 60 + stoi(end.substr(3,2));
        int t = en-st, cn = notes.size();
        
        for (int i=0; i<t; i++) {
            played += notes[i%cn];
        }
        
        if (played.find(m)!=string::npos) {
            if (time<t) {
                answer = name;
                time = t;
            }
        }
    }
    return answer;
}