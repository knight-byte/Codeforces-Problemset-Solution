#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (auto &x:a)
            cin >> x;
        sort(a.begin(), a.end());
        //int minElement = *min_element(a.begin(), a.end());
        int ans = 0;
        for (int i=1; i<n; i++) {
            while (a[i]+a[0] <= k) {
                a[i] += a[0];
                ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}