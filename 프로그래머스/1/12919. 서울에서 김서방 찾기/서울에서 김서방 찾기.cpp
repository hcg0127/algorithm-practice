#include <bits/stdc++.h>

using namespace std;

string solution(vector<string> seoul) {
    int vs = seoul.size();
    for (int i=0; i<vs; i++) {
        if (seoul[i].compare("Kim")==0)
            return "김서방은 " + to_string(i) + "에 있다";
    }
}