#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int n, k1, k2;
        cin >> n >> k1 >> k2;
        vector<int> a(k1), b(k2);
        int p1=0, p2=0;
        for (auto &x:a) {
            cin >> x;
            p1 += x;
        }
        for (auto &y:b) {
            cin >> y;
            p2 += y;
        }
        int max1 = *max_element(a.begin(), a.end());
        int max2 = *max_element(b.begin(), b.end());
        if (max1>max2)
            cout <<  "YES\n";
        else 
            cout << "NO\n";
    }

    return 0;
}