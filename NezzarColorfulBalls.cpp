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
        set<int> sa;
        for (int i=0; i<n; i++)
            sa.insert(a[i]);
        int max = 0;
        for (auto i=sa.begin(); i!=sa.end(); i++) {
            int temp = count(a.begin(), a.end(), *i);
            if (temp>max)
                max = temp;
        }
        cout << max << endl;
    }

    return 0;
}