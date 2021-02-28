#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int w, h, n;
        cin >> w >> h >> n;
        int sheets = 1;
        if (w%2==0) {
            while (w%2==0) {
                w /= 2;
                sheets *= 2;
            }
        }
        if (h%2==0) {
            while (h%2==0) {
                h /= 2;
                sheets *= 2;
            }
        }
        if (sheets >= n) 
            cout << "YES\n";
        else 
            cout << "NO\n";
    }

    return 0;
}