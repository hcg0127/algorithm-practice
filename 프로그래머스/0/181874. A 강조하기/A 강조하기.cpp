#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    for (auto &s : myString) {
        if (s=='a') s = toupper(s);
        else if (s!='A' && 65<=s && s<=90) s = tolower(s);
    }
    return myString;
}