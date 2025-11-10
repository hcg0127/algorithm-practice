#include <bits/stdc++.h>

using namespace std;

long long solution(int price, int money, int count)
{
    long long tmp = (long long)(price * (count+1)) * count / 2;
    return tmp<=money ? 0 : tmp-money;
}