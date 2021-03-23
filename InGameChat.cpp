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
        reverse(s.begin(), s.end());
        int par=0;
        for (int i=0; i<n; i++) {
            if (s[i]!=')')
                break;
            else 
                par++;
        }
       if (2*par>n)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}