#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n<=30)
            cout << "NO\n";
        else {
            if (n==36 || n==40 || n==44)
                cout << "YES\n" << 6 << " " << 10 << " " << 15 << " " << n-31 << endl;
            else 
                cout << "YES\n" << 6 << " " << 10 << " " << 14 << " " << n-30 << endl;
        }
    }

    return 0;
}