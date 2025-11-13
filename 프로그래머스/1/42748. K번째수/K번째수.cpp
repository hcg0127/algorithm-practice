#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for (auto com : commands) {
        int i=com[0]-1,j=com[1]-1,k=com[2]-1;
        vector<int> v(array.begin()+i,array.begin()+j+1);
        sort(v.begin(),v.end());
        answer.push_back(v[k]);
    }
    return answer;
}