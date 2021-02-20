#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    vector<vector<int>> ans;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i=0; i<n; i++)
            arr[i] = i+1;
        // since index should not match with values, we swap with the neighbour element
        for (int i=0; i<n; i++) {
            if (i+1>=n && n>2) {
                swap(arr[i], arr[0]);
            }
            else if (arr[i] == i+1) {
                swap(arr[i], arr[i+1]);
            }
        }
        ans.push_back(arr);
    }
    for (int i=0; i<ans.size(); i++) {
        for (int j=0; j<ans[i].size(); j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }

    return 0;
}