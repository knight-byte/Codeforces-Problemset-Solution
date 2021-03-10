#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int b, p, f, h, c;
        cin >> b >> p >> f;
        cin >> h >> c;
        int profit = 0;
        b /= 2;
        if (h<c) {
            swap(h, c);
            swap(p, f);
        }
        int cnt = min(b, p);
        b -= cnt, p -= cnt;
        profit += h*cnt;

        cnt = min(b, f);
        b -= cnt, f -= cnt;
        profit += c*cnt;

        cout << profit << endl;
    }

    return 0;
}