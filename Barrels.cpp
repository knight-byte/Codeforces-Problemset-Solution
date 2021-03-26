#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        vector<long long> a(n);
        for (auto &x:a)
            cin >> x;
        sort(a.begin(), a.end());
        for (int i=0, j=n-2; i<k; i++) {
            a[n-1] += a[j];
            a[j] = 0;
            j--;
        }
        sort(a.begin(), a.end());
        long long ans = a[n-1] - a[0];
        cout << ans << endl;
    }

    return 0;
}