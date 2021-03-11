#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        set<int> ans;
        for (int i=0; i<n; i++) {
            int x;
            cin >> x;
            if (ans.count(x))
                x++;
            ans.insert(x);
        }
        cout << ans.size() << endl;
    }

    return 0;
}