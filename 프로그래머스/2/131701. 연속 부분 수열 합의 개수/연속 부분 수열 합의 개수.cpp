#include <bits/stdc++.h>

using namespace std;

int sum[2001];

int solution(vector<int> elements) {
    int n = elements.size();
    unordered_set<int> sums;
    vector<int> extended = elements;
    extended.insert(extended.end(),elements.begin(),elements.end());
    
    for (int i=0; i<n; i++) {
        int sum = 0;
        for (int len=0; len<n; len++) {
            sum += extended[i+len];
            sums.insert(sum);
        }
    }
    
    return sums.size();
}