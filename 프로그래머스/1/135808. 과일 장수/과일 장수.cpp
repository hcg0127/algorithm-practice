#include <bits/stdc++.h>

using namespace std;//4'6, 2'4, 1'3 -> 4개 3세트([0]4444 [4]4422 [8]2211 [12]1)

int solution(int k, int m, vector<int> score) {
    sort(score.begin(),score.end(),greater<int>());
    int answer=0,vs=score.size();
    for (int i=0; i+m-1<vs; i+=m) {
        answer += score[i+m-1] * m;
    }
    return answer;
}