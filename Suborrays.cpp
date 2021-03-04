#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        for (int i=1; i<=n; i++) {
            a.push_back(i);
        }
        random_shuffle(a.begin(), a.end());
        for (auto &x:a)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}