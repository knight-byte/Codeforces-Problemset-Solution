#include <bits/stdc++.h>
using namespace std;

int main(void) {
    vector<int> v(3);
    for (auto &x:v)
        cin >> x;
    int a, b, c, d;
    cin >> d;
    sort(v.begin(), v.end());
    a = v[0], b = v[1], c = v[2];
    long long ans = 0;
    ans = max(0, d-(b-a)) + max(0, d-(c-b));
    cout << ans << endl;

    return 0;
}