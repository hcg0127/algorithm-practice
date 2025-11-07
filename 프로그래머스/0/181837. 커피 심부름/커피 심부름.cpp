#include <string>
#include <vector>

using namespace std;

int solution(vector<string> order) {
    int answer = 0, ame = 0, caf = 0;
    for (auto s : order) {
        if (s.find("cafelatte")!=string::npos) caf++;
        else ame++;
    }
    return ame * 4500 + caf * 5000;
}