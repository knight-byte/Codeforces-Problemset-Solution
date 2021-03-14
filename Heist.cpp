#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (auto &x:a)
        cin >> x;
    sort(a.begin(), a.end());
    long long x=a[0], y=a[n-1];
    int ans = (y-x+1) - n;
    cout << ans << endl;
    return 0;
}