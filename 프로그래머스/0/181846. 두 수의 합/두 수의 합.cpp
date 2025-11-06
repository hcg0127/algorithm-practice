#include <bits/stdc++.h>

using namespace std;

string solution(string a, string b) {
    string answer = "";
    int as=a.size(),bs=b.size(),mx=max(as,bs),d=0;
    if (as>bs) b.insert(b.begin(),as-bs,'0');
    else if (as<bs) a.insert(a.begin(),bs-as,'0');
    for (int i=mx-1; i>=0; i--) {
        int tmp = (a[i]-'0') + (b[i]-'0') + d;
        answer.push_back((tmp%10)+'0');
        d = tmp/10;
    }
    if (d) answer.push_back(d+'0');
    reverse(answer.begin(),answer.end());
    return answer;
}