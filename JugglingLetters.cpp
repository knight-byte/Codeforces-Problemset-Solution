#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        vector<int> a(26);
        int n;
        cin >> n;
        for (int i=0; i<n; i++) {
            string s;
            cin >> s;
            for (char ch:s) 
                a[ch-'a']++;
        }
        bool ans = true;
        for (int i=0; i<n; i++) {
            if (a[i]%n!=0) {
                ans = false;
                break;
            }
        }
        if (ans)
            cout << "YES\n";
        else 
            cout << "NO\n";
    }

    return 0;
}