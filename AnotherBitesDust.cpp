#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(void) {
    ll a, b, c;
    cin >> a >> b >> c;
    if (abs(a-b)>1) {
        ll minNum = min(a, b);
        ll ans = 2*(minNum + c) + 1;
        cout << ans << endl;
    } 
    else {
        ll ans = a + b + (2*c);
        cout << ans << endl;
    }

    return 0;
}