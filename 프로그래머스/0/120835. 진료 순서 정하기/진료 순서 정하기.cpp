#include <algorithm>
#include <vector>
#define pii pair<int,int>

using namespace std;

bool cmp(pii a, pii b) {
    return a.second>b.second;
}

vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    int idx=1,rank=1;
    vector<pii> v;
    for (auto i : emergency) {
        v.push_back({idx++, i});
    }
    sort(v.begin(),v.end(),cmp);
    for (auto &p : v) {
        p.second = rank++;
    }
    sort(v.begin(),v.end());
    for (auto p : v) {
        answer.push_back(p.second);
    }
    return answer;
}