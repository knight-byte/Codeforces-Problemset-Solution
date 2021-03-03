#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        long long total = 0;
        for (int i=0; i<3; i++) {
            long long x;
            cin >> x;
            total += x;
        }
        cout << total/2 << endl;
    }

    return 0;
}