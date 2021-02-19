#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    vector<string> ans;
    while (t--) {
        int n;
        cin >> n;
        // we need 2 sides to be consecutively parallel to X and Y axis
        if (n%4==0)
            ans.push_back("YES");
        else
            ans.push_back("NO");
    }
    for (auto &x:ans)
        cout << x << endl;

    return 0;
}