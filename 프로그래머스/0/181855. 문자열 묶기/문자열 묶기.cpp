#include <bits/stdc++.h>

using namespace std;
int arr[100001];

int solution(vector<string> strArr) {
    for (auto s : strArr) {
        arr[s.size()]++;
    }
    return *max_element(arr,arr+100001);
}