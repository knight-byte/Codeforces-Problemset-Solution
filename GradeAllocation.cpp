#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        long long n, m, total=0;
        cin >> n >> m;
        vector<long long> a(n);
        for (auto &x:a) {
            cin >> x;
            total += x;
        }
        cout << min(total, m) << endl;
    }

    return 0;
}