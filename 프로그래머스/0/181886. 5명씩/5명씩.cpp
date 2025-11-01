#include <bits/stdc++.h>

using namespace std;

vector<string> solution(vector<string> names) {
    vector<string> answer;
    int vs = names.size();
    for (int i=0; i<vs; i++) {
        if (!(i%5)) answer.push_back(names[i]);
    }
    return answer;
}