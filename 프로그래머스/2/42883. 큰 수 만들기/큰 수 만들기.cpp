#include <bits/stdc++.h>

using namespace std;

string solution(string number, int k) {
    string answer = "";
    for (auto ch : number) {
        if (answer.empty()) answer.push_back(ch);
        else {
            while (!answer.empty() && answer.back()<ch && k) {
                answer.pop_back();
                k--;
            }
            answer.push_back(ch);
        }
    }
    if (answer.size()>number.size()-k) answer.erase(answer.begin()+k+1,answer.end());
    return answer;
}