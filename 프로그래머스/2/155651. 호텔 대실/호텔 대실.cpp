#include <bits/stdc++.h>

using namespace std;

int solution(vector<vector<string>> book_time) {
    int answer = 0;
    sort(book_time.begin(),book_time.end());
    priority_queue<int, vector<int>, greater<int>> pq;
    for (auto vs : book_time) {
        int start = stoi(vs[0].substr(0,2)) * 60 + stoi(vs[0].substr(3,2));
        int end = stoi(vs[1].substr(0,2)) * 60 + stoi(vs[1].substr(3,2)) + 10;
        if (pq.empty()) {
            pq.push(end);
            answer++;
        }
        else if (pq.top() <= start) {
            pq.pop();
            pq.push(end);
        } else {
            answer++;
            pq.push(end);
        }
    }
    return answer;
}