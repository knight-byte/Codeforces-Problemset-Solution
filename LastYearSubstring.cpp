#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool ans = false;
        for (int i=0; i<=4; i++) {
            if (s.substr(0, i)+s.substr(n-4+i, 4-i)=="2020") {
                ans = true;
                break;
            }
        }
        if (ans)
            cout << "YES\n";
        else 
            cout << "NO\n";
    }

    return 0;
}