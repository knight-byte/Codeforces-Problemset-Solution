#include <bits/stdc++.h>
using namespace std;

int main(void) {
    long long n, k;
    cin >> n >> k;
    int ans = 0;
    int red, green, blue;
    red = n*2;
    green = n*5;
    blue = n*8;
    // for red
    if (red>k) {
        if (red%k==0)
            ans += red/k;
        else 
            ans += red/k + 1;
    }
    else 
        ans += 1;
    // for green
    if (green>k) {
        if (green%k==0)
            ans += green/k;
        else
            ans += green/k + 1;
    }
    else 
        ans += 1;
    // for blue
    if (blue>k) {
        if (blue%k==0)
            ans += blue/k;
        else 
            ans += blue/k + 1;
    }
    else 
        ans += 1;
    
    cout << ans << endl;

    return 0;
}