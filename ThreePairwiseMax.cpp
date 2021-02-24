#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        vector<int> arr(3);
        for (auto &x:arr)
            cin >> x;
        sort(arr.begin(), arr.end());
        if (arr[1] != arr[2])
            cout << "NO\n";
        else 
            cout << "YES\n" << arr[0] << " " << arr[0] << " " << arr[2] << endl;
    }

    return 0;
}