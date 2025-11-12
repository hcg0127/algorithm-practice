#include <string>
#include <vector>

using namespace std;
bool al[26];
int pos[26];

vector<int> solution(string s) {
    vector<int> answer;
    int vs = s.size();
    for (int i=0; i<vs; i++) {
        char c = s[i];
        if (!al[c-'a']) {
            answer.push_back(-1);
            al[c-'a']=1;
        } else {
            answer.push_back(i-pos[c-'a']);
        }
        pos[c-'a']=i;
    }
    return answer;
}