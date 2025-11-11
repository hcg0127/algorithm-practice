#include <bits/stdc++.h>

using namespace std;

int solution(string t, string p) {
    int answer=0,ts=t.size(),ps=p.size();
    for (int i=0; i<=ts-ps; i++) {
        if (t.substr(i,ps)<=p) answer++;
    }
    return answer;
}