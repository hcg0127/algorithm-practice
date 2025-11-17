#include <algorithm>
#include <vector>

using namespace std;

int solution(vector<int> array, int height) {
    sort(array.begin(),array.end());
    return array.size() - (upper_bound(array.begin(),array.end(),height)-array.begin());
}