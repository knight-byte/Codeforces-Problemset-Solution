#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &x:a)
        cin >> x;
    int l=0, r=0;
    for (int i=0; i<n; i++) {
        if (a[i]<=k)
            l++;
        else 
            break;
    }
    reverse(a.begin(), a.end());
    for (int i=0; i<n; i++) {
        if (a[i]<=k)
            r++;
        else 
            break;
    }
    cout << min(n, l+r) << endl;

    return 0;
}