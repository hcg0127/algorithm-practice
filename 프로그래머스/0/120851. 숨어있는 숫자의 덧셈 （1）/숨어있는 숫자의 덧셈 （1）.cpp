#include <bits/stdc++.h>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    for (auto c : my_string) {
        if (48<=c && c<=57) answer += c-'0';
    }
    return answer;
}