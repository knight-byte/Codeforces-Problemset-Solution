#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    pair<int, int> a[n];
    for (int i=0; i<n; i++) {
        cin >> a[i].first >> a[i].second;
    }
    int x;
    cin >> x;
    for (int i=0; i<n; i++) {
        if (x <= a[i].second) {
            cout << n-i << endl;
            break;
        }
    }

    return 0;
}