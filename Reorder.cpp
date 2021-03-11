#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int n, m, total=0;
        cin >> n >> m;
        vector<int> a(n);
        for (auto &x:a) {
            cin >> x;
            total += x;
        }
        if (total == m)
            cout << "YES\n";
        else 
            cout << "NO\n";
    }

    return 0;
}