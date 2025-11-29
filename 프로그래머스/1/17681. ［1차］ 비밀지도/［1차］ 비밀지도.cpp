#include <bits/stdc++.h>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    int vs = arr1.size();
    for (int i=0; i<vs; i++) {
        int bit = arr1[i] | arr2[i];
        string tmp = "";
        for (int j=n-1; j>=0; j--) {
            tmp += ((bit>>j)&1) ? '#' : ' ';
        }
        answer.push_back(tmp);
    }
    return answer;
}