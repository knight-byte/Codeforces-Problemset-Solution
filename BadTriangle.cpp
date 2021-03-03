#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (auto &x:arr)
            cin >> x;
        if (arr[0]+arr[1] <= arr[n-1])
            cout << 1 << " " << 2 << " " << n << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}