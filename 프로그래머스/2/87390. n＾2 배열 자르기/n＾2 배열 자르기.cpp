#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector<int> solution(int n, long long left, long long right) {
    vector<int> answer;
    for (ll i=left; i<=right; i++) {
        ll row = i/n, col = i%n;
        answer.push_back(max(row,col)+1);
    }
    return answer;
}