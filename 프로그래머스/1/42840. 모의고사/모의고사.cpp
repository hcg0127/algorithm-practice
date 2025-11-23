#include <bits/stdc++.h>
#define pii pair<int,int>

using namespace std;

bool cmp(pii a, pii b) {
    if (a.first==b.first) return a.second<b.second;
    else return a.first>b.first;
}

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> one = {1,2,3,4,5}, two = {2,1,2,3,2,4,2,5}, three = {3,3,1,1,2,2,4,4,5,5};
    int vs = answers.size(), na=0, wa=0, ha=0;
    for (int i=0; i<vs; i++) {
        int tmp = answers[i];
        if (tmp==one[i%5]) na++;
        if (tmp==two[i%8]) wa++;
        if (tmp==three[i%10]) ha++;
    }
    vector<pii> v = {{na,1},{wa,2},{ha,3}};
    sort(v.begin(),v.end(),cmp);
    int mx = v[0].first;
    for (auto p : v) {
        if (p.first==mx) answer.push_back(p.second);
    }
    return answer;
}