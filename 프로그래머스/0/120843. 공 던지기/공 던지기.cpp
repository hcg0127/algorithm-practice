#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = -2, vs = numbers.size();
    for (int i=0; i<k; i++) answer = (answer+2)%vs;
    return numbers[answer];
}