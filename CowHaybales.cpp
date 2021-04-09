#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        vector<int> piles(n);
        for (auto &x:piles)
            cin >> x;
        while (d--) {
            for (int i=1; i<n; i++) {
                if (piles[i]>0) {
                    piles[i]--;
                    piles[i-1]++;
                    break;
                }
            }
        }
        cout << piles[0] << endl;
        
    }

    return 0;
}