#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &x:a)
            cin >> x;
        bool ok = true;
        for (int i=0; i<n; i++) {
            for (int j=0; j<i; j++)
                ok &= abs(a[i]-a[j]) != 1;
        }
        cout << 2-ok << endl;
    }

    return 0;
}