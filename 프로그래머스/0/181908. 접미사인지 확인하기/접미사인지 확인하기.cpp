#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    int answer = 0, ss = my_string.size();
    for (int i=0; i<ss; i++) {
        string tmp = my_string.substr(i, ss-i);
        if (tmp==is_suffix) {
            answer = 1;
            break;
        }
    }
    return answer;
}