#include <bits/stdc++.h>

using namespace std;

int solution(string A, string B) {
    int answer = -1, as = A.size();
    if (A.compare(B)==0) return 0;
    for (int i=1; i<=as; i++) {
        char tmp = A[as-1];
        A.erase(A.end()-1);
        A.insert(A.begin(),1,tmp);
        if (A.compare(B)==0) return i;
    }
    return answer;
}