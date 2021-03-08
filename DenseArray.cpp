#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (auto &x:arr)
            cin >> x;
        int ans=0;
        for (int i=0; i<n-1; i++) {
            int a = min(arr[i], arr[i+1]);
            int b = max(arr[i], arr[i+1]);
            while (a*2<b) {
                a *= 2;
                ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}