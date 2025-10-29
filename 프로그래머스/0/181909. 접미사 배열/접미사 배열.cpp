#include <bits/stdc++.h>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    int ss = my_string.size();
    for (int i=0; i<ss; i++) {
        answer.push_back(my_string.substr(i,ss-i));
    }
    sort(answer.begin(), answer.end());
    return answer;
}