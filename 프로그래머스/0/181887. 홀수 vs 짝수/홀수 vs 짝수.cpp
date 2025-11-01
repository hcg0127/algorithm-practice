#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> num_list) {
    int ss = num_list.size(), s1 = 0, s2 = 0;
    for (int i=0; i<ss; i++) {
        if (i%2) s2+=num_list[i];
        else s1+=num_list[i];
    }
    return max(s1, s2);
}