#include <string>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int vs=absolutes.size(), answer=0;
    for (int i=0; i<vs; i++) answer += absolutes[i] * (signs[i] ? 1 : -1);
    return answer;
}