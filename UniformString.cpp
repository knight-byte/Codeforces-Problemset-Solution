#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        for (int i=0; i<n; i++) {
            cout << char('a'+ i%k);
        }
        cout << endl;
    }

    return 0;
}