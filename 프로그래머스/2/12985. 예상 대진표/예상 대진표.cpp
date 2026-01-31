#include <bits/stdc++.h>

using namespace std;

int solution(int n, int a, int b)
{
    int answer = 1;
    if (n==2) return answer;
    while (1) {
        double da=ceil((double)a/2), db=ceil((double)b/2);
        if (n==1 || abs(a-b)==1 && (int)da==(int)db) break;
        answer++;
        n/=2;
        a = da;
        b = db;
    }

    return answer;
}