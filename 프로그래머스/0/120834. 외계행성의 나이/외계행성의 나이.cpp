#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    while (age) {
        int tmp = age%10;
        answer.insert(answer.begin(),1,tmp+'a');
        age/=10;
    }
    return answer;
}