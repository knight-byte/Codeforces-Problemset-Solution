#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        bool ans = true;
        sort(s.begin(), s.end());
        for (int i=0; i<s.size()-1; i++) {
            if (s[i+1] != s[i] + 1) {
                ans = false;
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