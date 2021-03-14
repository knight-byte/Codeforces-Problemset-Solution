#include <bits/stdc++.h>
using namespace std;

int main(void) {
    vector<int> a(4);
    for (auto &x:a)
        cin >> x;
    sort(a.begin(), a.end());
    if (a[0] + a[2] == a[1] + a[3])
        cout << "YES\n";
    else if (a[0] + a[3] == a[1] + a[2])
        cout << "YES\n";
    else if (a[0] + a[1] + a[2] == a[3])
        cout << "YES\n";
    else 
        cout << "NO\n";

    return 0;
}