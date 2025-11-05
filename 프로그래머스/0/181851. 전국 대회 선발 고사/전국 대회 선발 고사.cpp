#include <bits/stdc++.h>
#define pii pair<int,int>

using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
    vector<pii> answer;
    int vs = rank.size();
    for (int i=0; i<vs; i++) {
        if (attendance[i]) answer.push_back({rank[i],i});
    }
    sort(answer.begin(),answer.end());
    return 10000 * answer[0].second + 100 * answer[1].second + answer[2].second;
}