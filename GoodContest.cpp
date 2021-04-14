#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    bool ans = false;
    while (t--) {
        string name;
        int before, after;
        cin >> name >> before >> after;
        if (before >= 2400 && after >= 2400) {
            if (after>before)
                ans = true;
        }
    }
    cout << (ans ? "YES\n":"NO\n");

    return 0;
}