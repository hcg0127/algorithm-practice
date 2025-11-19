#include <bits/stdc++.h>

using namespace std;
map<int,int> m;

int solution(vector<vector<int>> lines) {
    int answer = 0;
    vector<int> a=lines[0],b=lines[1],c=lines[2];
    for (int i=-100; i<100; i++) {
        int tmp = 0;
        if (a[0]<=i && i<a[1]) tmp++;
        if (b[0]<=i && i<b[1]) tmp++;
        if (c[0]<=i && i<c[1]) tmp++;
        if (tmp>1) answer++;
    }
    return answer;
}