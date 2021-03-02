#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t, n, m, b;
    cin >> t;
    const int N = 1005;
    int a[N];
    bool vis[N];
    while (t--) {
        cin >> n >> m;
        for (int i=0; i<n; i++) {
            cin >> a[i];
            vis[a[i]] = true;
        }
        int e = -1;
        for (int j=0; j<m; j++) {
            cin >> b;
            if (vis[b])
                e = b;
        }
        for (int i=0; i<n; i++)
            vis[a[i]] = false;
        if (e==-1)
            cout << "NO\n";
        else 
            cout << "Yes\n1 " << e << endl;
    }

    return 0;
}