#include <bits/stdc++.h>
#define pii pair<int,int>

using namespace std;

int solution(vector<int> players, int m, int k) {
    int answer = 0, n = players.size(), cnt = 0;
    queue<pii> q;
    for (int i=0; i<n; i++) {
        int p = players[i];
        if (!q.empty() && q.front().first == i) {
            cnt -= q.front().second;
            q.pop();
        }
        if (p>=m*(cnt+1)) {
            int tmp = 0;
            while (p>=m*(cnt+1)) {
                tmp++;
                p -= m;
            }
            answer += tmp;
            cnt += tmp;
            q.push({i+k,tmp});
        }
    }
    return answer;
}