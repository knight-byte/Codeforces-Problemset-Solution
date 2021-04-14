#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (auto &x:a)
        cin >> x;
    sort(a.rbegin(), a.rend());
    int sum=0, cnt=0;
    for (int i=0; i<n; i++) {
        if (sum < m) {
            sum += a[i];
            cnt++;
        }
        else if (sum>m)
            break;
    }
    cout << cnt << endl;

    return 0;
}