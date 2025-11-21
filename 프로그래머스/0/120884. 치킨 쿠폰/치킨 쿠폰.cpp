#include <bits/stdc++.h>

using namespace std;

int solution(int chicken) {
    int answer = 0;
    while (chicken>=10) {
        answer+=1;
        chicken-=9;
    }
    return answer;
}