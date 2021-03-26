#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        long long n, a, b;
        cin >> n >> a >> b;
        long long ans = ceil(n/2)*min(2*a, b) + (n%2) * a;
        cout << ans << endl; 
    }

    return 0;
}