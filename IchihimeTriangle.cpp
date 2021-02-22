#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    vector<vector<long long>> ans;
    while (t--) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        vector<long long> tempSol;
        // we can always get the solution by taking the sides b, c and c (yes c two times)
        tempSol.push_back(b);
        tempSol.push_back(c);
        tempSol.push_back(c);
        ans.push_back(tempSol);
    }
    for (int i=0; i<ans.size(); i++) {
        for (int j=0; j<ans[i].size(); j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }

    return 0;
}