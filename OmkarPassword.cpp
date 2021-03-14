#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &x:a)
            cin >> x;
        sort(a.begin(), a.end());
        if (a.front() == a.back())
            cout << n << endl;
        else 
            cout << 1 << endl;
    }

    return 0;
}