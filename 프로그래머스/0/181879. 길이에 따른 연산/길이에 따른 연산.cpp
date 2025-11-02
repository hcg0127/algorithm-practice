#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int a1=0, a2=1, vs=num_list.size();
    for (auto i : num_list) {
        a1 += i;
        a2 *= i;
    }
    return (vs>=11) ? a1 : a2;
}