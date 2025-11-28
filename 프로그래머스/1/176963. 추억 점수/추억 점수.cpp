#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    map<string,int> m;
    int vs = name.size();
    for (int i=0; i<vs; i++) m[name[i]] = yearning[i];
    for (auto v : photo) {
        int tmp = 0;
        for (auto str : v) {
            tmp += m[str];
        }
        answer.push_back(tmp);
    }
    return answer;
}