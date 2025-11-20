#include <bits/stdc++.h>
#define pii pair<int,int>

using namespace std;

bool cmp1(pii a, pii b) {
    return a.first>b.first;
}

bool cmp2(pii a, pii b) {
    return a.second<b.second;
}

vector<int> solution(vector<vector<int>> score) {
    vector<pii> tmp;
    int vs = score.size();
    for (int i=0; i<vs; i++) {
        tmp.push_back({score[i][0]+score[i][1], i});
    }
    sort(tmp.begin(),tmp.end(),cmp1);
    map<double,int,greater<int>> m;
    for (auto v : tmp) {
        m[v.first]++;
    }
    int idx=0,rank=1;
    for (auto p : m) {
        if (p.second==1) {
            tmp[idx++].first = rank++;
        } else {
            int ps = p.second;
            while (ps--) {
                tmp[idx].first = rank;
                idx++;
            }
            rank += p.second;
        }
    }
    sort(tmp.begin(),tmp.end(),cmp2);
    vector<int> answer;
    for (auto p : tmp) {
        answer.push_back(p.first);
    }
    return answer;
}