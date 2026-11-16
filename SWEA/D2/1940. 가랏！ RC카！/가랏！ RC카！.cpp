#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int tc=1; tc<=t; tc++) {
        int n;
        cin >> n;

        int distance = 0, vel = 0;

        for (int i = 0; i < n; i++) {
            int command;
            cin >> command;

            if (command == 0) {
                distance += vel;
            } else if (command == 1) {
                int accel;
                cin >> accel;
                vel += accel;
                distance += vel;
            } else if (command == 2) {
                int decel;
                cin >> decel;
                if (vel < decel) {
                    vel = 0;
                } else {
                    vel -= decel;
                }
                distance += vel;
            }
        }

        cout << "#" << tc << " " << distance << "\n";
    }
}
