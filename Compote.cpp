#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int a, b, c;
    cin >> a >> b >> c;
    int ans = 0;
    while (true) {
        if (a>0) {
            if ((2*a<=b) && (4*a<=c)) {
                ans = a + 2*a + 4*a;
                break;
            }
            else 
                a--;
        }
        else {
            ans = 0;
            break;
        }
    }
    cout << ans << endl;

    return 0;
}