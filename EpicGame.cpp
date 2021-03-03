#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int a, b, n;
    cin >> a >> b >> n;
    int ans = 0;
    bool turn = true;
    while (n>0) {
        int temp;
        if (turn) {
            temp = __gcd(a, n);
            n -= temp;
            turn = false;
            if (temp>n)
                ans = 0;
        }
        else {
            temp = __gcd(b, n);
            n -= temp;
            turn = true;
            if (temp>n)
                ans = 1;
        }
    }
    cout << ans << endl;

    return 0;
}