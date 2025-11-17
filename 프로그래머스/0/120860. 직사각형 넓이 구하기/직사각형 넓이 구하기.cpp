#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> dots) {
    int xn=300,yn=300,xx=-300,yx=-300;
    for (auto v : dots) {
        xn=min(xn,v[0]);
        xx=max(xx,v[0]);
        yn=min(yn,v[1]);
        yx=max(yx,v[1]);
    }
    return (xx-xn) * (yx-yn);
}