#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int n, c0, c1, h, coins=0;
        cin >> n >> c0 >> c1 >> h;
        string s;
        cin >> s;
        for (int i=0; i<n; i++) {
            if (s[i]=='0')
                coins += min(c0, h+c1);
            else 
                coins += min(c1, h+c0);
        }
        cout << coins << endl;
    }

    return 0;
}