#include <bits/stdc++.h>
#define pii pair<int,int>

using namespace std;

vector<int> solution(vector<int> numbers) {
    int n = numbers.size();
    vector<int> answer(n,-1);
    stack<pii> s;
    for (int i=0; i<n; i++) {
        if (s.empty()) s.push({i,numbers[i]});
        else {
            if (s.top().second>=numbers[i]) s.push({i,numbers[i]});
            else {
                while (!s.empty() && s.top().second<numbers[i]) {
                    answer[s.top().first] = numbers[i];
                    s.pop();
                }
                s.push({i,numbers[i]});
            }
        }
    }
    return answer;
}