#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    int o=0,e=0;
    for (auto i : num_list) {
        i&1 ? o++ : e++;
    }
    return vector<int>{e,o};
}