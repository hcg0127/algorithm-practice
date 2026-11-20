#include <string>
#include <vector>
#include <map>
#include <algorithm>
#define pii pair<int,int>
#define pis pair<int,string>

using namespace std;

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    
    map<string,int> gm;
    map<string,vector<pii>> im;
    int ss = genres.size();
    for (int i=0; i<ss; i++) {
        gm[genres[i]] += plays[i];
        im[genres[i]].push_back({plays[i],i});
    }
    
    vector<pis> sg;
    for (auto [g,p] : gm) {
        sg.push_back({p,g});
    }
    sort(sg.begin(),sg.end(),[](const pis a, const pis b) {
        if (a.first==b.first) return a.second<b.second;
        else return a.first>b.first;
    });
    
    for (auto p : sg) {
        string g = p.second;
        
        sort(im[g].begin(),im[g].end(),[](const pii a, const pii b) {
            if (a.first == b.first) return a.second<b.second;
            else return a.first>b.first;
        });
        
        int cnt = 0;
        for (auto ii : im[g]) {
            if (cnt==2) break;
            answer.push_back(ii.second);
            cnt++;
        }
    }
    
    return answer;
}