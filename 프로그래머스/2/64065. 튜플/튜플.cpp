#include <bits/stdc++.h>

using namespace std;

bool arr[100001];

vector<int> solution(string s) {
    vector<int> answer;
    vector<pair<int,vector<int>>> v;
    int ss = s.size(), num = 0;
    vector<int> tmp;
    for (int i=0; i<ss; i++) {
        if (s[i]=='{') {
            num = 0;
            tmp.clear();
        }
        else if (s[i]=='}') {
            tmp.push_back(num);
            v.push_back({tmp.size(),tmp});
        } else if (s[i]==',') {
            tmp.push_back(num);
            num = 0;
        }
        else {
            num = num*10 + (s[i]-'0');
        }
    }
    sort(v.begin(),v.end());
    for (auto t : v) {
        for (auto num : t.second) {
            if (!arr[num]) {
                arr[num] = 1;
                answer.push_back(num);
            }
        }
    }
    
    return answer;
}