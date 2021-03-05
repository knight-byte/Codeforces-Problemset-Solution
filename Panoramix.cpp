#include <bits/stdc++.h>
using namespace std;

bool prime(int x) {
    if (x<=1)
        return false;
    else {
        for (int i=2; i<x; i++) {
            if (x%i==0)
                return false;
        }
        return true;
    } 
}

int main(void) {
    int n, m;
    cin >> n >> m;
    bool ans = false;
    for (int i=n+1; i<=m; i++) {
        if (prime(i)) {
            if (i==m) {
                ans = true;
                break;
            }
            else {
                ans = false;
                break;
            }
        }
        else {
            ans = false;
        }
    }
    if (ans)
        cout << "YES\n";
    else 
        cout << "NO\n";

    return 0;
}