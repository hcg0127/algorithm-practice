#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for (auto q : queries) {
        int mn = 1000001;
        for (int i=q[0]; i<=q[1]; i++) {
            if (mn > arr[i] && arr[i] > q[2]) {
                mn = arr[i];
            }
        }
        answer.push_back((mn==1000001) ? -1 : mn);
    }
    return answer;
}