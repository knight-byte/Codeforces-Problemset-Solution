#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int h, m;
        cin >> h >> m;
        int res = 0;
        res = (23-h)*60 + (60-m);
        cout << res << endl;
    }

    return 0;
}