#include <bits/stdc++.h>

using namespace std;

string solution(vector<string> my_strings, vector<vector<int>> parts) {
    string answer = "";
    int i=0;
    for (auto p : parts) {
        answer += my_strings[i++].substr(p[0], p[1]+1-p[0]);
    }
    return answer;
}