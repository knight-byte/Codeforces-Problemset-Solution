#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), ans;
        for (auto &x:a)
            cin >> x;
        for (int i=0; i<n; i++) {
            if ((i+1)%2!=0)
                ans.push_back(-a[i+1]);
            else 
                ans.push_back(a[i-1]);
        }
        for (auto &x:ans)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}