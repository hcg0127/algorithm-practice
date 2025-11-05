#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    if (s[0]=='+') return stoi(s.substr(1,s.size()-1));
    else if (s[0]=='-') return -1 * stoi(s.substr(1,s.size()-1));
    else if (47<=s[0] && s[0]<=56) return stoi(s);
}