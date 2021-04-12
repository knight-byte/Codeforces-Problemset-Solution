#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int n, cnt=0;
        cin >> n;
        vector<int> a(n);
        for (auto &x:a)
            cin >> x;
        sort(a.rbegin(), a.rend());
        if (a.size()==1)
            cout << a[0] << endl;
        else {
            for (int i=0; i<n; i++) {
                if (a[i] >= i+1)
                    cnt++;
            }
            cout << cnt << endl;
        }
    }

    return 0;
}