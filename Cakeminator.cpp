#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, m;
    cin >> n >> m;
    set<int> col, row;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            char c;
            cin >> c;
            if (c=='S') {
                row.insert(i);
                col.insert(j);
            }
        }
    }
    int ans = n*m - col.size()*row.size();
    cout << ans << endl;

    return 0;
}