#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    vector<int> v;
    for (auto i:ingredient) {
        v.push_back(i);
        int vs = v.size();
        if (vs>=4) {
            if (v[vs-1]==1 && v[vs-2]==3 && v[vs-3]==2 && v[vs-4]==1) {
                answer++;
                v.erase(v.end()-4,v.end());
            }
        }
    }
    return answer;
}