#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, k, pos=0;
        cin >> a >> b >> k;
        long long total = 0;
        long long x=0, y=0;
        if (k%2==0) 
            x = y = k/2;
        else {
            x = k/2 + 1;
            y = k - x;
        }
        total = a*x - b*y;
        cout << total << endl;
    }
    return 0;
}