#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int j = 4*n;
        for (int i=0; i<n; i++) {
            cout << j << " ";
            j -= 2;
        }
        cout << endl;
    }

    return 0;
}