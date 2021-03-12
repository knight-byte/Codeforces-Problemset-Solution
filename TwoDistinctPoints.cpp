#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;
        vector<int> a{l1, r1, l2, r2};
        int ans1=0, ans2=0;
        for (auto &x:a) {
            for (auto &y:a) {
                if (l1<=x && x<=r1 && l2<=y && y<=r2 && x!=y) {
                    ans1 = x;
                    ans2 = y;
                }
            }
        }
        cout << ans1 << " " << ans2 << endl;
    }

    return 0;
}