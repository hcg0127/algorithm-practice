#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0, n = citations.size();
    sort(citations.begin(),citations.end());
    for (int i=0; i<n; i++) {
        int h = n-i;
        if (citations[i]>=h) return h;
    }
    return 0;
}