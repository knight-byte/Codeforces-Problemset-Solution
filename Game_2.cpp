#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x:a)
        cin >> x;
    sort(a.begin(), a.end());
    if (n%2==0) {
        int temp = n/2 - 1;
        cout << a[temp] << endl;
    }
    else {
        int temp = n/2;
        cout << a[temp] << endl;
    }

    return 0;
}