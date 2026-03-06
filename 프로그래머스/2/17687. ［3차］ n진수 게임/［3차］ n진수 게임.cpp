#include <bits/stdc++.h>

using namespace std;

string solution(int n, int t, int m, int p) {
    string answer = "", arr = "0";
    int mx_turn = (t-1) * m + p;
    for (int i=1; i<=mx_turn; i++) {
        string tmp = "";
        int num = i;
        while (num) {
            if (num%n==10) tmp += 'A';
            else if (num%n==11) tmp += 'B';
            else if (num%n==12) tmp += 'C';
            else if (num%n==13) tmp += 'D';
            else if (num%n==14) tmp += 'E';
            else if (num%n==15) tmp += 'F';
            else tmp += num%n+'0';
            num /= n;
        }
        reverse(tmp.begin(),tmp.end());
        arr += tmp;
    }
    for (int i=p; i<=mx_turn; i+=m) answer += arr[i-1];
    return answer;
}