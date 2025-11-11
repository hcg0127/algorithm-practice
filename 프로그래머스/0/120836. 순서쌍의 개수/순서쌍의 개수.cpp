#include <bits/stdc++.h>

using namespace std;

int solution(int n) {
    int answer = 0, tmp = 0;
    for (int i=1; i<=n; i++) {
        if (!(n%i)) tmp++;
    }
    return tmp;
}