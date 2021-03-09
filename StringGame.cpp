#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        string ans;
        for (int i=0; i<s.size(); i++) {
            if (i%2==0) {
                if (s[i]=='a')
                    ans += 'b';
                else
                    ans += 'a';
            }
            else {
                if (s[i]=='z')
                    ans += 'y';
                else 
                    ans += 'z';
            }
        }
        cout << ans << endl;
    }

    return 0;
}