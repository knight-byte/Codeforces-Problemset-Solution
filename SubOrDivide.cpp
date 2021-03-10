#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n<=3)
            cout << n-1 << endl;
        else if (n>3 && n%2==0)
            cout << 2 << endl;
        else if (n>3 && n%2!=0)
            cout << 3 << endl;
    }

    return 0;
}