#include <bits/stdc++.h>

using namespace std;

bool cmp(int a, int b) {
    string x = to_string(a), y = to_string(b);
    return x+y>y+x;
}

string solution(vector<int> numbers) {
    string answer = "";
    sort(numbers.begin(),numbers.end(),cmp);
    for (auto i : numbers) answer += to_string(i);
    return answer[0]=='0' ? "0" : answer;
}