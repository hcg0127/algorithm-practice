#include <bits/stdc++.h>

using namespace std;

long long solution(string numbers) {
    vector<string> n = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int pos;
    for (int i=0; i<10; i++) {
        while ((pos=numbers.find(n[i]))!=string::npos) {
            numbers.replace(pos, n[i].size(), to_string(i));
        }
    }
    return stoll(numbers);
}