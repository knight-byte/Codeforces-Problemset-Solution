#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<int> a(n), b;
    for (auto &x:a)
        cin >> x;
    int steps = count(a.begin(), a.end(), 1);
    for (int i=0; i<n-1; i++) {
        if (a[i+1]==1)
            b.push_back(a[i]);
    }
    b.push_back(a[n-1]);
    cout  << steps << endl;
    for (auto &x:b)
        cout << x << " ";
    cout << endl;

    return 0;
}