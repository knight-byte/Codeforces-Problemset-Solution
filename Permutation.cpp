#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    vector<vector<int> > res;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(2*n);
        unordered_set<int> sol;
        for (auto &x:arr)
            cin >> x;
        for (auto i=arr.begin(); i!=arr.end(); i++) 
            sol.insert(*i);
        vector<int> temp;
        for (auto &x:sol)
            temp.push_back(x);
        reverse(temp.begin(), temp.end());
        res.push_back(temp);
    }
    for (int i=0; i<res.size(); i++) {
        for (int j=0; j<res[i].size(); j++) 
            cout << res[i][j] << " ";
        cout << endl;
    }

    return 0;
}