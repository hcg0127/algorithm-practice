#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> sequence, int k) {
    int n = sequence.size();
    int left = 0, right = 0;
    int current_sum = sequence[0];
    
    int min_len = n + 1;
    vector<int> answer = {0, 0};

    while (right < n) {
        if (current_sum < k) {
            right++;
            if (right < n) current_sum += sequence[right];
        } 
        else if (current_sum > k) {
            current_sum -= sequence[left];
            left++;
        } 
        else {
            int current_len = right - left + 1;
            
            if (current_len < min_len) {
                min_len = current_len;
                answer = {left, right};
            }
            
            current_sum -= sequence[left];
            left++;
        }
    }
    
    return answer;
}