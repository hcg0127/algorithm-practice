#include <string>
#include <vector>

using namespace std;

string solution(int q, int r, string code) {
    string answer = "";
    int ss = code.size();
    for (int i=0; i<ss; i++) {
        if (i%q==r) answer += code[i];
    }
    return answer;
}