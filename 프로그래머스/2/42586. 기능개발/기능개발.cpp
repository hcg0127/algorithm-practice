#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer, deploy;
    int n = speeds.size(), cnt=0;
    for (int i=0; i<n; i++) {
        double p=progresses[i], s=speeds[i];
        deploy.push_back((int)ceil((100-p)/s));
    }
    stack<int> st;
    for (auto i : deploy) {
        if (st.empty()) st.push(i);
        else if (st.top()<i) {
            st.pop();
            answer.push_back(++cnt);
            cnt=0;
            st.push(i);
        } else {
            cnt++;
        }
    }
    answer.push_back(++cnt);
    return answer;
}