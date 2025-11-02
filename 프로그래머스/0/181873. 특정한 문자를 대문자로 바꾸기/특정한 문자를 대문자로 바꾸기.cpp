#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string alp) {
    for (auto &s : my_string) {
        if (s==alp[0]) s = toupper(s);
    }
    return my_string;
}