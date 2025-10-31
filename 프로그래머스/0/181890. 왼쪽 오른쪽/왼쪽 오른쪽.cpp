#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> str_list) {
    vector<string> answer;
    int vs = str_list.size();
    for (int i=0; i<vs; i++) {
        if (str_list[i]=="l") {
            return vector<string>(str_list.begin(),str_list.begin()+i);
        } else if (str_list[i]=="r") {
            return vector<string>(str_list.begin()+i+1,str_list.end());
        }
    }
    return answer;
}