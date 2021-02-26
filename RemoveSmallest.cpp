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
        sort(arr.begin(), arr.end());
        bool state = true;
        for (int i=0; i<n-1; ++i) {
            if (arr[i+1]-arr[i] > 1) {
                state = false;
                break;
            }
        }
        if (state)
            cout << "YES\n";
        else 
            cout << "NO\n";
    }
    

    return 0;
}