#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    stack<int> s;

    for (auto i : arr) {
        if (s.empty()) {
            s.push(i);
            answer.push_back(i);
        } else if (s.top()!=i) {
            s.push(i);
            answer.push_back(i);
        }
    }

    return answer;
}