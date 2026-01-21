#include <bits/stdc++.h>

using namespace std;

map<string, int> m = {{"code",0}, {"date",1}, {"maximum",2}, {"remain",3}};
string sort_str;

bool cmp(const vector<int> &a, const vector<int> &b) {
    return a[m[sort_str]]<b[m[sort_str]];
}

vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) {
    vector<vector<int>> answer;
    for (auto v : data) {
        if (v[m[ext]]<val_ext) answer.push_back(v);
    }
    sort_str=sort_by;
    sort(answer.begin(),answer.end(),cmp);
    return answer;
}