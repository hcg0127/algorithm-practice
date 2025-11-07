#include <string>
#include <vector>

using namespace std;

int solution(vector<string> order) {
    int answer = 0, ame = 0, caf = 0;
    for (auto s : order) {
        if (s.find("americano")!=string::npos || s.compare("anything")==0) ame++;
        else if (s.find("cafelatte")!=string::npos) caf++;
    }
    return ame * 4500 + caf * 5000;
}