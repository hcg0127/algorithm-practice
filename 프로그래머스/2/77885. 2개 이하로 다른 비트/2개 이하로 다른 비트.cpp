#include <bits/stdc++.h>

using namespace std;

vector<long long> solution(vector<long long> numbers) {
    vector<long long> answer;
    for (auto ll : numbers) {
        if (!(ll%2)) answer.push_back(ll+1);
        else {
            bitset<50> b(ll);
            int last;
            for (int i=0; i<50; i++) {
                if (!b[i]) {
                    last = i;
                    break;
                }
            }
            b[last]=1;
            b[last-1]=0;
            answer.push_back(b.to_ullong());
        }
    }
    return answer;
}