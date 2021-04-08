#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, m;
    cin >> n >> m;
    vector<int> bulb(m);
    while (n--) {
        int k;
        cin >> k;
        vector<int> a(k);
        for (auto &x:a) {
            cin >> x;
            bulb[x-1]++;
        }
    }
    for (auto &y:bulb) {
        if (y <= 0) {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";

    return 0;
}