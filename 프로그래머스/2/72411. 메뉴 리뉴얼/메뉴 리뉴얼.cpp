#include <bits/stdc++.h>

using namespace std;

map<string, int> m;
int arr[21];

void back(const string &str, int d, string tmp) {
    if (tmp.size() >= 2) {
        m[tmp]++;
        arr[tmp.size()] = max(arr[tmp.size()], m[tmp]);
    }
    
    for (int i=d; i<str.size(); i++) {
        back(str, i+1, tmp+str[i]);
    }
}

vector<string> solution(vector<string> orders, vector<int> course) {
    vector<string> answer;
    m.clear();
    fill(arr,arr+21,0);
    for (auto o : orders) {
        sort(o.begin(),o.end());
        back(o,0,"");
    }
    
    for (auto c : course) {
        if (arr[c]<2) continue;
        for (auto const& [menu, count] : m) {
            if (menu.size()==c && count==arr[c]) {
                answer.push_back(menu);
            }
        }
    }
    sort(answer.begin(),answer.end());
    return answer;
}