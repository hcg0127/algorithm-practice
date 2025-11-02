#include <bits/stdc++.h>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    int vs = strArr.size();
    for (int i=0; i<vs; i++) {
        string str = strArr[i];
        if (i%2) transform(str.begin(),str.end(),str.begin(),::toupper);
        else transform(str.begin(),str.end(),str.begin(),::tolower);
        answer.push_back(str);
    }
    return answer;
}