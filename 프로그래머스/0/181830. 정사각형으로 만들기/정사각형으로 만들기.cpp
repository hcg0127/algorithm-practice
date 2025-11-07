#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {
    int rs = arr.size(), cs = arr[0].size();
    if (rs<cs) arr.insert(arr.end(), cs-rs, vector<int>(cs,0));
    else if (rs>cs) {
        for (auto &v : arr) v.insert(v.end(), rs-cs, 0);
    }
    return arr;
}