#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool is_prime(ll n) {
    if (n==1) return false;
    for (ll i=2; i<=sqrt(n); i++) {
        if (n%i==0) return false;
    }
    return true;
}

int solution(int n, int k) {
    ll answer = 0;
    string str = "",tmp;
    
    while (n) {
        str += n%k+'0';
        n/=k;
    }
    reverse(str.begin(),str.end());
    
    vector<ll> pn;
    stringstream ss(str);
    while (getline(ss, tmp, '0')) {
        if (tmp.empty()) continue;
        pn.push_back(stoll(tmp));
    }
    for (auto i : pn) if (is_prime(i)) answer++;
    return answer;
}