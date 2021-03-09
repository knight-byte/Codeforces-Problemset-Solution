#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    string s, ans;
    cin >> s;
    int j=1;
    for (int i=0; i<n;) {
        ans += s[i];
        i += j;
        j++;
    }
    cout << ans << endl;
    return 0;
}