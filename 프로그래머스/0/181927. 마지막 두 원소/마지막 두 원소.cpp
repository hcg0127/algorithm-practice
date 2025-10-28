#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    answer = num_list;
    int vs = answer.size(), r = answer[vs-1], rr = answer[vs-2];
    answer.push_back((r>rr) ? r-rr : 2*r);
    return answer;
}