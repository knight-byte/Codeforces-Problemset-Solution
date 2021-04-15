#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, m, sum=0;
    cin >> n >> m;
    bool state = true;
    while (true) {
        if (!state)
            break;
        else {
            for (int i=1; i<=n; i++) {
                if (m<i) {
                    state = false;
                    break;
                }
                else {
                    m -= i;
                }
            }
        }
    }
    cout << m << endl;

    return 0;
}