#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    int ss = phone_number.size();
    string answer = "";
    answer.insert(answer.end(),ss-4,'*');
    answer += phone_number.substr(ss-4,4);
    return answer;
}