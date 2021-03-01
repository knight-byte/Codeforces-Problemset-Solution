#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(2*n);
        for (auto &x:arr)
            cin >> x;
        vector<int> used(n), ans;
        for (int i=0; i<2*n; i++) {
            if (!(used[arr[i]-1])) {
                used[arr[i]-1] = true;
                ans.push_back(arr[i]);
            }
        }
        for (auto &x:ans)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}