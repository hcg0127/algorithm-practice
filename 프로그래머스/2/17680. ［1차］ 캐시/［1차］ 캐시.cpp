#include <bits/stdc++.h>

using namespace std;

int solution(int cacheSize, vector<string> cities) {
    
    if (cacheSize == 0) return cities.size() * 5;
    int answer = 0;
    deque<string> dq;

    for (string city : cities) {
        for (char &c : city) c = tolower(c);
        
        auto it = find(dq.begin(), dq.end(), city);

        if (it != dq.end()) {
            answer += 1;
            dq.erase(it);
            dq.push_back(city);
        } else {
            answer += 5;
            if (dq.size() >= cacheSize) {
                dq.pop_front();
            }
            dq.push_back(city);
        }
    }
    return answer;
}