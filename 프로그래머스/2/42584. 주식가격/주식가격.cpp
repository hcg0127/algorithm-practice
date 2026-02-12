#include <bits/stdc++.h>
#define pii pair<int,int>

using namespace std;

vector<int> solution(vector<int> prices) {
    int ss = prices.size();
    vector<int> answer(ss,0);
    stack<pii> st;
    for (int i=0; i<ss; i++) {
        int p = prices[i];
        if (st.empty() || st.top().first<=p) st.push({p,i});
        else {
            while (!st.empty() && st.top().first>p) {
                answer[st.top().second] = i-st.top().second;
                st.pop();
            }
            st.push({p,i});
        }
    }
    while (!st.empty()) {
        answer[st.top().second] = ss - st.top().second - 1;
        st.pop();
    }
    
    return answer;
}