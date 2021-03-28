#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n), b(n);
        for (auto &x:a)
            cin >> x;
        for (auto &y:b)
            cin >> y;
        sort(a.begin(), a.end());
        sort(b.rbegin(), b.rend());
        bool ans = true;
        for (int i=0; i<n; i++) {
            if (a[i]+b[i]>x) {
                ans = false;
                break;
            }
        }
        cout << (ans ? "YES\n":"NO\n");
        string s;
        getline(cin, s);
    }

    return 0;
}