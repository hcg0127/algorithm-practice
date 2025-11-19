#include <bits/stdc++.h>

using namespace std;
int num[101];

bool th(int num) {
    string tmp = to_string(num);
    return (tmp.find('3')!=string::npos) ? true : false;
}

int solution(int n) {
    int answer = 0, idx=1;
    for (int i=1; i<=n; i++) {
        while (idx%3==0 || th(idx)) {
            num[i] = ++idx;
        }
        if (!num[i]) num[i] = idx++;
        else idx++;
    }
    return num[n];
}