#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> arr) {
    int answer = 1, n = arr.size();
    for (int i=0; i<n-1; i++) {
        answer = lcm(lcm(arr[i],arr[i+1]), answer);
    }
    return answer;
}