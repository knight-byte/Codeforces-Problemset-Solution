#include <bits/stdc++.h>
using namespace std;

int main(void) {
    long long n;
    cin >> n;
    string s;
    cin >> s;
    string room = "0000000000";
    for (int i=0; i<n; i++) {
        if (s[i]=='L') {
            for (int j=0; j<n; j++) {
                if (room[j]=='0') {
                    room[j] = '1';
                    break;
                }
                else 
                    continue;
            }
        }
        else if (s[i]=='R') {
            for (int j=room.size()-1; j>=0; j--) {
                if (room[j]=='0') {
                    room[j] = '1';
                    break;
                }
                else 
                    continue;
            }
        }
        else {
            int x = s[i] - '0';
            room[x] = '0'; 
        }
    }
    cout << room << endl;

    return 0;
}