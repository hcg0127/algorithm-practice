#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    int cor=0,zero=count(lottos.begin(),lottos.end(),0);
    for (auto i : win_nums) {
        if (find(lottos.begin(),lottos.end(),i)!=lottos.end()) cor++;
    }
    if (cor==6) return vector<int>{1,1};
    else if (zero==6) return vector<int>{1,6};
    else if (cor==0 && zero==0) return vector<int>{6,6};
    else return vector<int>{7-cor-zero,7-cor};
}