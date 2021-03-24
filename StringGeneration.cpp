#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        char c = 'a';
        for (int i=0; i<n; i++) {
            cout << c;
            if (c <= 'b') 
                c++;
            else 
                c = 'a';
        }
        cout << endl;
    }

    return 0;
}