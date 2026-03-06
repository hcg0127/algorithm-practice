#include <bits/stdc++.h>

using namespace std;

string solution(int n) {
    string answer = "";
    while (n) {
        int d = n%3;
        if (d==0) {
            answer += "4";
            n = n/3 - 1;
        } else {
            answer += d + '0';
            n /= 3;
        }
    }
    reverse(answer.begin(),answer.end());
    return answer;
}