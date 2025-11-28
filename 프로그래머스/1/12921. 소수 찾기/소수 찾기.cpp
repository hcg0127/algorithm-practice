#include <bits/stdc++.h>

using namespace std;

bool np[1000001];

int solution(int n) {
    int answer = 0;
    for (int i=2; i<=n; i++) {
        if (!np[i]) {
            answer++;
            
            for (int j=i*2; j<=n; j+=i) np[j]=1;
        }
    }
    return answer;
}