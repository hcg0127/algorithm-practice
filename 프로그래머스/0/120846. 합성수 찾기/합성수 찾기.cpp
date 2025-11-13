#include <bits/stdc++.h>

using namespace std;

int solution(int n) {
    int answer = 0;
    for (int i=4; i<=n; i++) {
        bool flag = 0;
        for (int j=2; j<i; j++) {
            if (!(i%j)) flag = 1;
        }
        if (flag) answer++;
    }
    return answer;
}