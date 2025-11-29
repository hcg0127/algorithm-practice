#include <bits/stdc++.h>
#define pii pair<int,int>

using namespace std;

bool cmp(pair<int,double> a, pair<int,double> b) {
    if (a.second==b.second) return a.first<b.first;
    return a.second>b.second;
}

int arr[501];
map<int,int,greater<>> m;

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    for (auto i : stages) {
        m[i]++;
    }
    int s=0,ms=m.size();
    for (int i=N+1; i>0; i--) {
        arr[i] = (m[i]!=0) ? m[i]+s : arr[i+1];
        s+=m[i];
    }
    vector<pair<int,double>> v;
    for (int i=1; i<=N; i++) {
        double tmp = arr[i]==0 ? 0 : (double)m[i]/arr[i];
        v.push_back({i,tmp});
    }
    sort(v.begin(),v.end(),cmp);
    for (auto i : v) answer.push_back(i.first);
    return answer;
}