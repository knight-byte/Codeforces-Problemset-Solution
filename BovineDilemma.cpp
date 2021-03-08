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
        set<int> s;
        for (int i=0; i<n; i++) {
            for (int j=i+1; j<n; j++) 
                s.insert(a[j]-a[i]);
        }
        cout << s.size() << endl;
    }

    return 0;
}