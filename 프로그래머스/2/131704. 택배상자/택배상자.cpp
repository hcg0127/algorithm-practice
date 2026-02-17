#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> order) {
    int idx = 0, answer = 0, n = 1;
    stack<int> st;
    while (1) {
        if (n==order[idx]) {
            answer++;
            idx++;
            n++;
        } else {
            if (!st.empty() && st.top()==order[idx]) {
                st.pop();
                answer++;
                idx++;
            } else {
                if (n>order.size()) break;
                st.push(n);
                n++;
            }
        }
    }
    return answer;
}