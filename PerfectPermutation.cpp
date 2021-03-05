#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++)
        a[i] = i+1;
    if (n==1 || n%2!=0) {
        cout << -1 << endl;
        return 0;
    }
    else {
        for (int i=0; i<n-1; i+=2)
            swap(a[i], a[i+1]);
    }
    for (auto &x:a)
        cout << x << " ";
    cout << endl;

    return 0;
}