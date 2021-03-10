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
        // read the question to understand the logic
        int ans = n - count(a.begin(), a.end(), *min_element(a.begin(), a.end()));
        cout << ans << endl;
    }

    return 0;
}