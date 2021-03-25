#include <bits/stdc++.h>
using namespace std;
// its correct, but it's failing the test.
int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        bool state = false;
        vector<int> a(n), ans;
        for (auto &x:a)
            cin >> x;
        for (int i=0; i<n; i++) {
            if (a[i]%2==0) {
                cout << 1 << endl;
                cout << i+1 << endl;
                state = true;
            }
            else {
                ans.push_back(i+1);
            }
        }
        if (!state) {
            if (ans.size()<=1)
                cout << -1 << endl;
            else {
                cout << 2 << endl;
                for (int i=0; i<2; i++)
                    cout << i+1 << " ";
                cout << endl;
            }   
        }
    }

    return 0;
}