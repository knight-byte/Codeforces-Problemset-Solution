#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x:a)
        cin >> x;
    int cnt = 0;
    for (int i=0; i<n; i++) {
        int temp = count(a.begin(), a.end(), a[i]);
        if (temp>cnt)
            cnt = temp;
    }
    cout << cnt << endl;

    return 0;
}