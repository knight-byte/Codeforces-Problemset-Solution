#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        vector<int> arr(n);
        for (auto &x:arr)
            cin >> x;
        sort(arr.begin(), arr.end());
        if (*max_element(arr.begin(), arr.end())<=d) 
            cout << "YES\n";
        else {
            if (arr[0]+arr[1]<=d)
                cout << "YES\n";
            else 
                cout << "NO\n";
        }
    }

    return 0;
}