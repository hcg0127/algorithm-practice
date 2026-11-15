#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    cout << ((a==2 && b==1 || a==3 && b==2 || a==1 && b==3) ? 'A' : 'B');
}