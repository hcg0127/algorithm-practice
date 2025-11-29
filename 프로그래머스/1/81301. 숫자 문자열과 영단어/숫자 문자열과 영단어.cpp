#include <bits/stdc++.h>

using namespace std;

int solution(string s) {
    vector<string> v = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    for (int i=0; i<10; i++) {
        int pos;
        while ((pos=s.find(v[i]))!=string::npos) {
            s.replace(pos,v[i].size(),to_string(i));
        }
    }
    return stoi(s);
}