#include <bits/stdc++.h>

using namespace std;

string solution(string my_string, vector<int> indices) {
    sort(indices.begin(), indices.end());
    int vs = indices.size();
    for (int i=0; i<vs; i++) {
        my_string.erase(my_string.begin()+indices[i]-i,my_string.begin()+indices[i]+1-i);
    }
    return my_string;
}