#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x:a)
        cin >> x;
    bool ans = false;
    for (int i=0; i<n; i++) {
        if (a[a[a[i]-1]-1]-1 == i) {
            ans = true;
            break;
        }
    }
    cout << (ans ? "YES\n" : "NO\n");

    return 0;
}