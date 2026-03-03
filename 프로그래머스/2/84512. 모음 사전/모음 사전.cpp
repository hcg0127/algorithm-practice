#include <bits/stdc++.h>

using namespace std;

int solution(string word) {
    int answer = 0, w[5] = {781, 156, 31, 6, 1}, n = word.size();
    map<char, int> m = {{'A',0}, {'E',1}, {'I',2}, {'O',3}, {'U',4}};
    for (int i=0; i<n; i++) {
        answer += (m[word[i]] * w[i]) + 1;
    }
    return answer;
}