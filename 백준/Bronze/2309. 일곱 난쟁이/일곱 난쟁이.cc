#include <bits/stdc++.h>
using namespace std;

int arr[9];
vector<int> v;
bool flag;

void back(int x, int d, vector<int> vec, int sum) {
    if (d==7 && !flag) {
        if (sum==100) {
            for (auto i:vec) cout << i << '\n';
            flag = true;
        }
        return;
    }
    for (int i=x; i<9; i++) {
        vec.push_back(arr[i]);
        back(i+1,d+1,vec,sum+arr[i]);
        vec.pop_back();
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    for (int i=0; i<9; i++) cin >> arr[i];
    sort(arr,arr+9);

    back(0,0,v,0);
}