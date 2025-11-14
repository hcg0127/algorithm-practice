#include <bits/stdc++.h>

using namespace std;

int solution(string s) {
    stringstream ss(s);
    string str;
    int answer = 0, last = 0;
    
    while (ss >> str) {
        if (str.compare("Z")==0) {
            answer -= last;
        } else {
            last = stoi(str);
            answer += last;
        }
    }
    return answer;
}