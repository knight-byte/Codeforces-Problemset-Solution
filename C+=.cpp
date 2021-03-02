#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int a, b, n;
        cin >> a >> b >> n;
        int steps = 0;
        while (!(a>n) && !(b>n)) {
            if (a>b) {
                b += a;
                steps++;
            }
            else {
                a += b;
                steps++;
            }
        }
        cout << steps << endl;
    }

    return 0;
}