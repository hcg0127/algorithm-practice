#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<int> numLog) {
    string answer = "";
    int vs = numLog.size();
    map<int, char> m = {{1, 'w'}, {-1, 's'}, {10, 'd'}, {-10, 'a'}};
    for (int i=0; i<vs-1; i++) {
        answer += m[numLog[i+1]-numLog[i]];
    }
    return answer;
}