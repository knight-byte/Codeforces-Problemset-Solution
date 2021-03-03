#include <bits/stdc++.h>
using namespace std;

int main(void) {
    long long n, l=0, r=0;
    cin >> n;
    string s;
    cin >> s;
    for (int i=0; i<n; i++) {
        if (s[i]=='L')
            l++;
        else
            r++;
    }
    cout << l+r+1 << endl;

    return 0;
}