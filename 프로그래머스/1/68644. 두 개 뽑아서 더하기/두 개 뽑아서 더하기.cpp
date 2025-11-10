#include <set>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers) {
    set<int> s;
    int vs = numbers.size();
    for (int i=0; i<vs; i++) {
        for (int j=i+1; j<vs; j++) s.insert(numbers[i]+numbers[j]);
    }
    return vector<int>(s.begin(),s.end());
}