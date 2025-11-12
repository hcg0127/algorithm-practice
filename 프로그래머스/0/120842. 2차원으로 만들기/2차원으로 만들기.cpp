#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> answer;
    int vs = num_list.size(), it = vs/n;
    vector<int> tmp;
    for (int i=0; i<it; i++) {
        vector<int> tmp;
        for (int j=0; j<n; j++) {
            tmp.push_back(num_list[n*i+j]);
        }
        answer.push_back(tmp);
    }
    return answer;
}