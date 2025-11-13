#include <bits/stdc++.h>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {        
    sort(participant.begin(),participant.end());
    sort(completion.begin(),completion.end());
    
    int vs = completion.size();
    for (int i=0; i<vs; i++) {
        if (participant[i]!=completion[i]) return participant[i];
    }
    return participant.back();
}