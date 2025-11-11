#include <bits/stdc++.h>

using namespace std;

int answer,n;

void back(int d, int x, int sum, vector<int> v) {
    if (d==3) {
        if (sum==0) answer++;
        return;
    }
    for (int i=x; i<n; i++) {
        sum += v[i];
        back(d+1,i+1,sum,v);
        sum -= v[i];
    }
}

int solution(vector<int> number) {
    n = number.size();
    back(0,0,0,number);
    return answer;
}