#include <bits/stdc++.h>
using namespace std;

int main(void) {
    // variable declaration and input
    int t;
    cin >> t;
    vector<int> res;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (auto &x : arr)
            cin >> x;
        sort(arr.begin(), arr.end());

        int result = arr[n-1] - arr[0];
        for (int i=0; i<n; i++) {
            for (int j=i+1; j<n; j++) 
                result = min(result, arr[j]-arr[i]);
        }
        res.push_back(result);
    }
    
    // output and returning 0
    for (auto &x : res)
        cout << x << endl;

    return 0;
}