#include <string>
#include <vector>

using namespace std;

vector<int> m_end = {31,29,31,30,31,30,31,31,30,31,30,31};
vector<string> d = {"FRI","SAT","SUN","MON","TUE","WED","THU"};

string solution(int a, int b) {
    int answer = 0;
    for (int i=1; i<a; i++) {
        answer += m_end[i-1];
    }
    answer += b-1;
    return d[answer%7];
}