#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string ans;
        for (int i=0; i<2*n-1; i+=2) {
            ans += s[i];
        }
        cout << ans << endl;
    }

    return 0;
}