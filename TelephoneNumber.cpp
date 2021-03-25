#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int n, pos=0;
        cin >> n;
        string s;
        cin >> s;
        if (count(s.begin(), s.end(), '8')<1)
            cout << "NO\n";
        else {
            for (int i=0; i<n; i++) {
                if (s[i] == '8') {
                    pos = i;
                    break;
                }
            }
            if (n-pos>=11)
                cout << "YES\n";
            else 
                cout << "NO\n";
        }
    }

    return 0;
}