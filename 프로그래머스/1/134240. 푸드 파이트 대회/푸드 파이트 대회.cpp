#include <bits/stdc++.h>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    int vs = food.size();
    for (int i=1; i<vs; i++) {
        for (int j=0; j<food[i]/2; j++) {
            answer.push_back(i + '0');
        }
    }
    return answer + "0" + string(answer.rbegin(),answer.rend());
}