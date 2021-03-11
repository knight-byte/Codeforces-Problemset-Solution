#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        if (x==y)
            cout << x+y << endl;
        else 
            cout << 2*max(x, y)-1 << endl;
    }

    return 0;
}