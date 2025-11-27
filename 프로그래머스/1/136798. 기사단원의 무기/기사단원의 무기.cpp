#include <bits/stdc++.h>

using namespace std;
vector<int> v;

int solution(int number, int limit, int power) {
    int answer = 0;
    for (int i=1; i<=number; i++) {
        int tmp=0;
        for (int j=1; j<=i; j++) {
            if (i%j==0) tmp++;
        }
        v.push_back(tmp);
    }
    for (auto i : v) {
        answer += i>limit ? power : i;
    }
    
    return answer;
}