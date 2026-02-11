#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0, l=0, r=people.size()-1;
    sort(people.begin(),people.end());
    while (l<=r) {
        int sum = people[l]+people[r];
        if (sum<=limit) {
            answer++;
            l++;
            r--;
        }
        else {
            answer++;
            r--;
        }
    }
    return answer;
}