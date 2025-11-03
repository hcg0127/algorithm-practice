#include <bits/stdc++.h>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    auto pos = 0;
    while ((pos = myString.find(pat, pos)) != string::npos) {
        answer++;
        pos++;
    }
    return answer;
}