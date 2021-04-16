#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (auto &x:a)
            cin >> x;
        for (auto &y:b)
            cin >> y;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        for (int i=0; i<n-1; i++) {
            if (a[i] == a[i+1] && b[i]==b[i+1])
                swap(a[i], a[i+1]);
        }
        for (auto &x:a)
            cout << x << " ";
        cout << endl;
        for (auto &y:b)
            cout << y << " ";
        cout << endl;
    }

    return 0;
}