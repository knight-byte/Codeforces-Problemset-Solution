#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a;
        for (int i=1; i<=n; i++)
            a.push_back(i);
        if (k==0) {
            for (auto &x:a)
                cout << x << " ";
        }
        else if ((n<3 && k>0) || n == k) 
            cout << -1 << endl;
        else {
            if (k*2+1 <= n) {
                for (int i=2; i<k*2+1; i+=2) 
                    swap(a[i], a[i-1]);
                for (auto &x:a)
                    cout << x << " ";
                cout << endl;
            }
            else 
                cout << -1 << endl;
        }
    }

    return 0;
}