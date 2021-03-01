#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<int> arr[4];
    for (int i=0; i<n; i++) {
        int x;
        cin >> x;
        arr[x].push_back(i+1);
    }
    int res = min(arr[1].size(), min(arr[2].size(), arr[3].size()));
    cout << res << endl;
    for (int i=0; i<res; i++) 
        cout << arr[1][i] << " " << arr[2][i] << " " << arr[3][i] << endl;

    return 0;
}