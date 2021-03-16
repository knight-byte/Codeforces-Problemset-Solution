#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        string a, b, c;
        cin >> a >> b >> c;
        bool ans = true;
        for (int i=0; i<c.length(); i++) {
            if (c[i]==a[i] || c[i]==b[i])
                continue;
            else {
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