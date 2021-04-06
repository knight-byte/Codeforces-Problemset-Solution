#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, ans=0;
    cin >> n;
    string s;
    cin >> s;
    for (int i=0; i<n; i++) {
        int x = s[i] - '0';
        if (x%2==0)
            ans += i+1;
    }
    cout << ans << endl;

    return 0;
}