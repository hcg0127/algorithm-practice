#include <bits/stdc++.h>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "Yes";
    int o=0, t=0, vs1=cards1.size(), vs2=cards2.size(), total=goal.size(), sum=0;
    while (sum<total) {
        if (vs1>o && goal[sum].compare(cards1[o])==0) {
            sum++;
            o++;
        } else if (vs2>t && goal[sum].compare(cards2[t])==0) {
            sum++;
            t++;
        } else {
            answer = "No";
            break;
        }
    }
    return answer;
}