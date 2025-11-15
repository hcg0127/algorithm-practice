#include <bits/stdc++.h>

using namespace std;

long long solution(string numbers) {
    string answer = "",tmp="";
    int ss = numbers.size();
    for (int i=0; i<ss; i++) {
        switch (numbers[i]) {
            case 'z':
                answer += '0';
                i+=3;
                break;
            case 'o':
                answer += '1';
                i+=2;
                break;
            case 't':
                if (numbers[i+1]=='w') {
                    answer += '2';
                    i+=2;
                } else {
                    answer += '3';
                    i+=4;
                }
                break;
            case 'f':
                if (numbers[i+1]=='o') {
                    answer += '4';
                    i+=3;
                } else {
                    answer += '5';
                    i+=3;
                }
                break;
            case 's':
                if (numbers[i+1]=='i') {
                    answer += '6';
                    i+=2;
                } else {
                    answer += '7';
                    i+=4;
                }
                break;
            case 'e':
                answer += '8';
                i+=4;
                break;
            case 'n':
                answer += '9';
                i+=3;
                break;
        }
    }
    return stoll(answer);
}