#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<string> vs(n);
    for (auto &x:vs)
        cin >> x;
    bool state = false;
    bool in = true;
    for (int i=0; i<n; i++) {
        if (in) {
            for (int j=0; j<4; j++) {
                if (vs[i][j]=='O' && vs[i][j+1]=='O') {
                    state = true;
                    vs[i][j] = '+';
                    vs[i][j+1] = '+';
                    in = false;
                    break;
                }
            }
        }
        else 
            break;  
    }
    if (state) {
        cout << "YES\n";
        for (auto &x:vs)
            cout << x << endl;
    }
    else 
        cout << "NO\n";

    return 0;
}