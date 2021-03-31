#include <bits/stdc++.h>
using namespace std;

int main(void) {
    long long n, s;
    cin >> n >> s;
    long long ans = 0;
    if (s%n==0)
        ans = s/n;
    else 
        ans = s/n + 1;
    cout << ans << endl;

    return 0;
}