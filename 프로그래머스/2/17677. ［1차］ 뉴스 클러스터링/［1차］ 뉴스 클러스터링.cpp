#include <bits/stdc++.h>

using namespace std;

vector<string> v1, v2, unio, inte;

void strptov(string str, vector<string> &v) {
    int n = str.size();
    for (int i=0; i<n-1; i++) {
       if (isalpha(str[i]) && isalpha(str[i+1])) {
           string tmp = "";
           tmp += (char)tolower(str[i]);
           tmp += (char)tolower(str[i+1]);
           v.push_back(tmp);
       }
    }
    sort(v.begin(),v.end());
}

int solution(string str1, string str2) {
    int answer = 0;
    strptov(str1, v1);
    strptov(str2, v2);
    set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),back_inserter(inte));
    set_union(v1.begin(),v1.end(),v2.begin(),v2.end(),back_inserter(unio));
    double result = (unio.size()) ? ((double)inte.size()/unio.size()) : 1;
    return (int)(result * 65536);
}