#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (auto &x:a)
        cin >> x;
    for (int i=0; i<n; i++) {
        if (a[i]%2==0)
            a[i] = a[i] - 1;
    }
    for (auto &x:a)
        cout << x << " ";
    cout << endl;

    return 0;
}