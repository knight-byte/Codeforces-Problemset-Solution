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
        if (k%2!=0) {
            long long maxEle = *max_element(a.begin(), a.end());
            for (int i=0; i<n; i++)
                a[i] = maxEle - a[i];
        }
        else {
            for (int i=0; i<2; i++) {
                long long maxEle = *max_element(a.begin(), a.end());
                for (int i=0; i<n; i++)
                    a[i] = maxEle - a[i];
            }
        }
        for (auto &x:a)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}