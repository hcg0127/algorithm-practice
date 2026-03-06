#include <bits/stdc++.h>
#define pii pair<int,int>

using namespace std;

vector<int> solution(vector<int> fees, vector<string> records) {
    vector<int> answer;
    map<string,int> time_m, cars;
    for (auto str : records) {
        stringstream ss(str);
        string time,num,op;
        ss >> time >> num >> op;
        int t = stoi(time.substr(0,2)) * 60 + stoi(time.substr(3,2));
        if (op.compare("IN")==0) {
            time_m[num] = t;
        } else {
            cars[num] += t-time_m[num];
            time_m.erase(num);
        }
    }
    
    int mx = 23*60+59;
    for (auto t : time_m) {
        cars[t.first] += mx - t.second;
    }
    
    for (auto car : cars) {
        int t = car.second;
        if (t<=fees[0]) answer.push_back(fees[1]);
        else {
            int tmp = t - fees[0];
            answer.push_back(fees[1] + ceil((double)tmp/fees[2]) * fees[3]);
        }
    }
    
    return answer;
}