#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int m, int c) {
    string answer = "";
    int ss = my_string.size(), i=c-1;
    while (i<ss) {
        answer += my_string[i];
        i+=m;
    }
    return answer;
}