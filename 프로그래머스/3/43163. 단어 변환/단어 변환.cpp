#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#define pii pair<int,int>
#define psi pair<string,int>

using namespace std;

int solution(string begin, string target, vector<string> words) {
    int answer = 1e9;
    
    if (find(words.begin(),words.end(),target)==words.end()) return 0;
    
    int ss = begin.size();
    vector<bool> visited(words.size());
    queue<psi> q;
    q.push({begin,0});
    
    while (!q.empty()) {
        auto [cur, cnt] = q.front();
        q.pop();
        
        if (cur.compare(target)==0) {
            answer = min(answer,cnt);
            continue;
        }
        
        for (int i=0; i<words.size(); i++) {
            int diff = 0;
            for (int j=0; j<ss; j++) {
                if (cur[j]!=words[i][j]) {
                    diff++;
                }
            }
            if (diff==1 && !visited[i]) {
                visited[i] = 1;
                q.push({words[i],cnt+1});
            }
        }
    }
    
    if (answer==1e9) answer = 0;
    return answer;
}