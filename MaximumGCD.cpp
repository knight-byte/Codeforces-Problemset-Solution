#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    vector<int> sol;
    while (t--) {
        int x;
        cin >> x;
        sol.push_back(x/2); // What the actual fuck
    }
    for (auto &x:sol)
        cout << x << endl;

    return 0;
}