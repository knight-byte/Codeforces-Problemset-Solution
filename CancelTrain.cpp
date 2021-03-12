#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for (auto &x:a)
            cin >> x;
        for (auto &y:b)
            cin >> y;
        int cnt = 0;
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                if (a[i]==b[j])
                    cnt++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}