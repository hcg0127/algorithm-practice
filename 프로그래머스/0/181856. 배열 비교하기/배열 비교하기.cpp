#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    int vs1=arr1.size(),vs2=arr2.size();
    int s1=accumulate(arr1.begin(),arr1.end(),0), s2=accumulate(arr2.begin(),arr2.end(),0);
    if (vs1>vs2 || (vs1==vs2 && s1>s2)) return 1;
    else if (vs1<vs2 || (vs1==vs2 && s1<s2)) return -1;
    else if (vs1==vs2 && s1==s2) return 0;
}