#include <string>
#include <vector>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    string answer = "";
    for (auto str : db) {
        if (str[0].compare(id_pw[0])==0) {
            if (str[1].compare(id_pw[1])==0) return "login";
            else return "wrong pw";
        }
    }
    return "fail";
}