#include <bits/stdc++.h>

using namespace std;

int solution(int n) {
    int answer = 0, num = n, no = 0;
    while (num>0) {
        if (num%2) no++;
        num/=2;
    }
    while (1) {
        num = ++n;
        int o = 0;
        while (num>0) {
            if (num%2) o++;
            num/=2;
        }
        if (o==no) break;
    }
    return n;
}