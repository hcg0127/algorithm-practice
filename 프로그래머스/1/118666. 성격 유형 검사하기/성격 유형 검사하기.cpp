#include <bits/stdc++.h>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    map<char,int> m;
    int n =survey.size();
    for (int i=0; i<n; i++) {
        int cho = choices[i];
        string str = survey[i];
        if (cho==4) continue;
        else if (cho<4) {
            m[str[0]]+=4-cho;
        } else {
            m[str[1]]+=cho-4;
        }
    }
    answer += (m['T']<=m['R'] ? 'R' : 'T');
    answer += (m['F']<=m['C'] ? 'C' : 'F');
    answer += (m['M']<=m['J'] ? 'J' : 'M');
    answer += (m['N']<=m['A'] ? 'A' : 'N');
    return answer;
}