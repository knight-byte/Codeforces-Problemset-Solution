#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int m, k, cnt=0;
        // difference between the volumes
        k = abs(a-b);
        // finding if the volume can be incremented by 5
        m = k/5;
        k -= 5*m;
        cnt += m;
        // finding if the volume can be incremented by 2
        m = k/2;
        k -= 2*m;
        cnt += m;
        // finding if the volume can be incremented by 1
        cnt += k;

        cout << cnt << endl;
    }

    return 0;
}