#include <bits/stdc++.h>

using namespace std;

struct File {
    string original;
    string head;
    int number;
};

bool cmp(const File& a, const File& b) {
    if (a.head == b.head) {
        return a.number < b.number;
    }
    return a.head < b.head;
}

vector<string> solution(vector<string> files) {
    vector<File> parsedFiles;
    
    for (string f : files) {
        string h = "", n = "";
        int i = 0;
        
        while (i<f.size() && !isdigit(f[i])) {
            h += tolower(f[i]);
            i++;
        }
        
        while (i<f.size() && isdigit(f[i]) && n.size()<5) {
            n += f[i];
            i++;
        }
        
        parsedFiles.push_back({f, h, stoi(n)});
    }
    
    stable_sort(parsedFiles.begin(),parsedFiles.end(),cmp);
    
    vector<string> answer;
    for (auto& pf : parsedFiles) {
        answer.push_back(pf.original);
    }
    
    return answer;
}