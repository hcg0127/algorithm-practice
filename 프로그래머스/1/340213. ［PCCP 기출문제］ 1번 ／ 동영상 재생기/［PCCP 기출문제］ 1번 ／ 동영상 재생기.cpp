#include <bits/stdc++.h>

using namespace std;

string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) {
    string answer = "";
    int vl = stoi(video_len.substr(0,2))*60 + stoi(video_len.substr(3));
    int p = stoi(pos.substr(0,2))*60 + stoi(pos.substr(3));
    int os = stoi(op_start.substr(0,2))*60 + stoi(op_start.substr(3));
    int oe = stoi(op_end.substr(0,2))*60 + stoi(op_end.substr(3));
    for (auto str : commands) {
        if (os<=p && p<=oe) p = oe;
        if (str.compare("prev")==0) {
            p-=10;
            if (p<0) p=0;
        } else {
            p+=10;
            if (p>vl) p=vl;
        }
    }
    if (os<=p && p<=oe) p = oe;
    int m = p/60, s = p%60;
    if (m/10==0) answer+="0";
    answer+=to_string(m);
    answer+=":";
    if (s/10==0) answer+="0";
    answer+=to_string(s);
    return answer;
}