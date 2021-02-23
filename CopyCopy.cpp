#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    vector<int> ans;
    while (t--) {
        int n;
        cin >> n;
        set<int> arr;
        for (int i=0; i<n; i++) {
            int temp;
            cin >> temp;
            arr.insert(temp);
        }
        ans.push_back(arr.size());
    }
    for (auto &x:ans)
        cout << x << endl;

    return 0;
}