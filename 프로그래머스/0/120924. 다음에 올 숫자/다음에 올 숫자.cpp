#include <string>
#include <vector>

using namespace std;

int solution(vector<int> common) {
    int mode, d;
    if (common[2]+common[0]==2*common[1]) {
        mode=0;
        d=common[2]-common[1];
    } else {
        mode=1;
        d=common[2]/common[1];
    }
    
    int cs = common.size();
    
    return mode==0 ? common[cs-1]+d : common[cs-1]*d;
}