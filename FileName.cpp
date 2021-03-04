#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = count(s.begin(), s.end(), 'x');
    if (cnt==n)
        cout << n-2 << endl;
    else {
        int ans=0, sub=0;
        for (int i=0; i<n; i++) {
            if (s[i]=='x')
                sub++;
            else 
                sub=0;
            if (sub>2)
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}