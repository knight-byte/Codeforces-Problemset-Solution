#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        if (n==1 || n==2)
            cout << 1 << endl;
        else {
            int floor = 1;
            while (floor*x+2 < n) {
                floor++;
            }
            cout << floor+1 << endl;
        }
    }

    return 0;
}