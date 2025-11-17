#include <algorithm>
#include <vector>

using namespace std;

int solution(vector<int> array, int n) {
    sort(array.begin(),array.end());
    return upper_bound(array.begin(),array.end(),n)-lower_bound(array.begin(),array.end(),n);
}