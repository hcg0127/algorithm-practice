#include <bits/stdc++.h>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    for (int i=l; i<=r; i++) {
        if (i%5!=0) continue;
        string str = to_string(i);
        bool flag = false;
        for (auto ch : str) {
            if (ch!='0' && ch!='5') {
                flag = true;
                break;
            }
        }
        if (!flag) answer.push_back(i);
    }
    if (answer.empty()) answer.push_back(-1);
    return answer;
}