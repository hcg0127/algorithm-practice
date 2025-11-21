#include <bits/stdc++.h>

using namespace std;

string solution(string bin1, string bin2) {
    int n1=stoi(bin1,nullptr,2),n2=stoi(bin2,nullptr,2),sum=n1+n2;
    if (sum==0) return "0";
    string answer = "";
    while (sum) {
        answer += to_string(sum%2);
        sum/=2;
    }
    reverse(answer.begin(),answer.end());
    return answer;
}