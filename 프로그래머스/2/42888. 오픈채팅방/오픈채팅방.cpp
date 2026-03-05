#include <bits/stdc++.h>
#define pss pair<string,string>

using namespace std;

vector<string> solution(vector<string> record) {
    vector<string> answer;
    map<string,string> idname;
    vector<pss> rec;
    for (auto st : record) {
        stringstream ss(st);
        string a,b,c;
        ss >> a >> b >> c;
        if (a.compare("Change")!=0) {
            if (a.compare("Enter")==0) idname[b] = c;
            rec.push_back({a,b});
        }
        else {
            idname[b] = c;
        }
    }
    for (auto r : rec) {
        if (r.first.compare("Enter")==0) answer.push_back(idname[r.second]+"님이 들어왔습니다.");
        else answer.push_back(idname[r.second]+"님이 나갔습니다.");
    }
    return answer;
}