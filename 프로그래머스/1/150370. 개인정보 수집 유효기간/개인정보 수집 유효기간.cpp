#include <bits/stdc++.h>

using namespace std;

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    map<string,int> t;
    for (auto str : terms) {
        stringstream ss(str);
        string a,b;
        ss >> a >> b;
        t[a]=stoi(b);
    }
    int idx=1;
    for (auto str : privacies) {
        stringstream ss(str);
        string a,b,tmp="";
        ss >> a >> b;
        int n = t[b], y=stoi(a.substr(0,4)), m=stoi(a.substr(5,2)), d=stoi(a.substr(8,2));
        m += n;
        while (m>12) {
            m -= 12;
            y++;
        }
        tmp = to_string(y) + ".";
        tmp += (m<10 ? "0" + to_string(m) : to_string(m)) + ".";
        tmp += (d<10 ? "0" + to_string(d) : to_string(d));
        if (today>=tmp) answer.push_back(idx);
        idx++;
    }
    return answer;
}