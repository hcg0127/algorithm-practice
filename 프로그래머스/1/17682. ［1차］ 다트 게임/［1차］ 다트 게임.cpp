#include <bits/stdc++.h>

using namespace std;

int solution(string dartResult) {
    int answer=0,cnt=0;
    vector<int> nums(3,0);
    string str="";
    for (auto ch : dartResult) {
        if ('0'<=ch && ch<='9') str+=ch;
        else if (ch=='S' || ch=='D' || ch=='T') {
            int tmp = stoi(str);
            if (ch=='S') nums[cnt] = tmp;
            else if (ch=='D') nums[cnt] = tmp * tmp;
            else nums[cnt] = tmp * tmp * tmp;
            str="";
            cnt++;
        } else if (ch=='*') {
            if (cnt>1) nums[cnt-2]*=2;
            nums[cnt-1]*=2;
        } else if (ch=='#') {
            nums[cnt-1]*=-1;
        }
    }
    for (auto i : nums) answer += i;
    return answer;
}