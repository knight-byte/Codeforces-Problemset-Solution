#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int n, m, r, c;
        cin >> n >> m >> r >> c;
        int ans = max(r-1, n-r) + max(c-1, m-c);
        cout << ans <<endl;
    }

    return 0;
}