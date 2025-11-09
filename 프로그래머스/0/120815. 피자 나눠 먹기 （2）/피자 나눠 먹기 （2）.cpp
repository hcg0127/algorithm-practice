#include <bits/stdc++.h>

using namespace std;

int solution(int n) {
    for (int i=6; i<=600; i+=6) {
        if (!(i%n)) return i/6;
    }
}