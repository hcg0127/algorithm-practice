#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    for (int tc=0; tc<10; tc++) {
        int t;
        cin >> t;

        vector<string> vec(100);
        for (int i = 0; i < 100; i++) {
            cin >> vec[i];
        }

        int ans = 1;
        bool found = 0;
        for (int len=100; len>=1 && !found; len--) {
            for (int line=0; line<100 && !found; line++) {
                for (int start = 0; start+len<=100; start++) {
                    bool ho = 1, ve = 1;

                    for (int k=0; k<len/2; k++) {
                        if (vec[line][start + k] != vec[line][start + len - 1 - k]) ho = 0;
                        if (vec[start + k][line] != vec[start + len - 1 - k][line]) ve = 0;
                    }

                    if (ho || ve) {
                        ans = len;
                        found = 1;
                        break;
                    }
                }
            }
        }

        cout << "#" << t << " " << ans << '\n';
    }
}