#include <string>
#include <vector>

using namespace std;

string solution(string cipher, int code) {
    string answer = "";
    int ss = cipher.size();
    for (int i=code-1; i<ss; i+=code) {
        answer += cipher[i];
    }
    return answer;
}