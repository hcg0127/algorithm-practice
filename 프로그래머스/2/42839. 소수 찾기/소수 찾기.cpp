#include <bits/stdc++.h>

using namespace std;

set<int> num_set;
bool visited[8];

bool is_prime(int n) {
    if (n<2) return false;
    for (int i=2; i<=sqrt(n); i++) {
        if (n%i==0) return false;
    }
    return true;
}

void dfs(string numbers, string cur) {
    if (cur != "") {
        num_set.insert(stoi(cur));
    }
    for (int i=0; i<numbers.size(); i++) {
        if (!visited[i]) {
            visited[i] = 1;
            dfs(numbers, cur + numbers[i]);
            visited[i] = 0;
        }
    }
}

int solution(string numbers) {
    int ans = 0;
    
    dfs(numbers, "");
    
    for (int n : num_set) {
        if (is_prime(n)) ans++;
    }
    
    return ans;
}