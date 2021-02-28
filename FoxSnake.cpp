#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, m;
    cin >> n >> m;
    bool state = true;
    for (int i=0; i<n; i++) {
        string s;
        if (i%2==0) {
            for (int i=0; i<m; i++) {
                s += "#";
            }
            cout << s << endl;
        }
        else {
            for (int i=0; i<m; i++) 
                s += ".";
            if (state) {
                s[m-1] = '#';
                state = false;
            }
            else {
                s[0] = '#';
                state = true;
            }
            cout << s << endl;
        }
    }

    return 0;
}