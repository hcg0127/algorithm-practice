#include <bits/stdc++.h>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    for (auto c : my_string) {
        if (48<=c && c<=57) answer.push_back(c-'0');
    }
    sort(answer.begin(),answer.end());
    return answer;
}