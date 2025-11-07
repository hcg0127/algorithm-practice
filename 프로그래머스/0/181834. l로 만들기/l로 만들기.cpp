#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    for (auto &c : myString) {
        if (97<=c && c<=107) c='l';
    }
    return myString;
}