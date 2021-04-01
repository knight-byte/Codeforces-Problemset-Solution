#include <bits/stdc++.h>
using namespace std;

int main(void) {
    vector<int> a(3);
    for (auto &x:a)
        cin >> x;
    sort(a.begin(), a.end());
    int ans = max(0, a[2] - (a[1]+a[0]-1));
    cout << ans << endl;

    return 0;
}