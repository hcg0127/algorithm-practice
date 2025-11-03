#include <string>
#include <vector>

using namespace std;

int solution(string binomial) {
    int n, oper;
    string tmp = "";
    for (auto c : binomial) {
        if (48<=c && c<=57) tmp.push_back(c);
        else if (c=='+') oper=0;
        else if (c=='-') oper=1;
        else if (c=='*') oper=2;
        else if (c==' ' && tmp.compare("")!=0) {
            n=stoi(tmp);
            tmp="";
        }
    }
    switch (oper) {
        case 0:
            return n + stoi(tmp);
        case 1:
            return n - stoi(tmp);
        case 2:
            return n * stoi(tmp);
    }
}