#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int ans = 0;
        for (int i=1; i<=n; i++) {
            for (int j=1; j<=m; j++) {
                char c;
                cin >> c;
                if (c=='C')
                    continue;
                if (i==n && c=='D')
                    ans++;
                if (j==m && c=='R')
                    ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}