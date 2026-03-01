#include <bits/stdc++.h>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    
    int ws = words.size();
    set<string> ss;
    
    for (int i=0; i<ws-1; i++) {
        int ls = words[i].size();
        ss.insert(words[i]);
        if (ss.find(words[i+1])!=ss.end() || words[i][ls-1]!=words[i+1][0])
            return vector<int>{(i+1)%n+1,(i+1)/n+1};
    }

    return vector<int>{0,0};
}