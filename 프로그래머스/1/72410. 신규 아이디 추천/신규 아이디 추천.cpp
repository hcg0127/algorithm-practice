#include <bits/stdc++.h>

using namespace std;

string solution(string new_id) {
    string answer = "";
    for (auto &c : new_id) {
        if (isupper(c)) c = tolower(c);
        if (c!='.' && c!='_' && c!='-' && (c<48 || c>57) && (c<97 || c>122)) c = ' ';
    }
    new_id.erase(remove(new_id.begin(),new_id.end(),' '),new_id.end());
    string ans = "";
    for (auto &c : new_id) {
        if (ans.back()=='.' && c=='.') continue;
        ans.push_back(c);
    }
    new_id = ans;
    if (new_id[0]=='.') new_id.erase(new_id.begin());
    if (new_id[new_id.size()-1]=='.') new_id.erase(new_id.end()-1);
    if (new_id.empty()) new_id+="a";
    if (new_id.size()>15) new_id.erase(new_id.begin()+15,new_id.end());
    if (new_id[new_id.size()-1]=='.') new_id.erase(new_id.end()-1);
    if (new_id.size()<=2) new_id.insert(new_id.end(),3-new_id.size(),new_id[new_id.size()-1]);
    return new_id;
}