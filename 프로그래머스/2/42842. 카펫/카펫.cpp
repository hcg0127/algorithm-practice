#include <bits/stdc++.h>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int bd=(brown-4)/2;
    for (int i=1; i<=bd/2; i++) {
        if (i*(bd-i)==yellow) {
            answer.push_back(bd-i+2);
            answer.push_back(i+2);
            break;
        }
    }
    return answer;
}