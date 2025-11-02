#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> arr) {
    int answer = 0;
    while (1) {
        bool flag = 0;
        for (auto &i : arr) {
            if (!(i%2) && i>=50) {
                i/=2;
                flag = 1;
            } else if (i%2 && i<50) {
                i=i*2+1;
                flag = 1;
            }
        }
        if (!flag) break;
        else answer++;
    }
    return answer;
}