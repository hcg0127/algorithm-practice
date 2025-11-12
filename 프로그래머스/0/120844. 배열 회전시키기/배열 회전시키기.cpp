#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    int vs = numbers.size();
    if (direction.compare("left")==0) {
        numbers.insert(numbers.end(),1,numbers[0]);
        numbers.erase(numbers.begin());
    } else {
        numbers.insert(numbers.begin(),1,numbers[vs-1]);
        numbers.erase(numbers.end()-1);
    }
    return numbers;
}