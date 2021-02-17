#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    vector<int> sol;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int res = min(2, n-1)*m;
        sol.push_back(res);
    }
    for (auto &x:sol)
        cout << x << endl;

    return 0;
}