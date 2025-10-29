#include <bits/stdc++.h>
#define pii pair<int,int>

using namespace std;

int solution(int a, int b, int c, int d) {
    int answer = 0, die[6] = {0,0,0,0,0,0};
    bool rd=0,nd=0,st=0;
    vector<pii> v;
    die[a-1]++; die[b-1]++; die[c-1]++; die[d-1]++;
    for (int i=0; i<6; i++) {
        if (die[i]!=0) v.push_back({die[i],i+1});
    }
    sort(v.rbegin(),v.rend());
    if (v.size()==1) answer = 1111 * v[0].second;
    else if (v.size()==4) answer = min({v[0].second, v[1].second, v[2].second, v[3].second});
    else if (v.size()==3) answer = v[1].second * v[2].second;
    else {
        if (v[0].first==3) answer = (int) pow(10*v[0].second + v[1].second, 2);
        else answer = (v[0].second + v[1].second) * abs(v[0].second - v[1].second);
    }
    return answer;
}