#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, m;
    cin >> n;
    vector<int> a(n);
    for (auto &x:a)
        cin >> x;
    cin >> m;
    vector<int> b(m);
    for (auto &y:b)
        cin >> y;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    cout << a[n-1] << " " << b[m-1] << endl;

    return 0;
}