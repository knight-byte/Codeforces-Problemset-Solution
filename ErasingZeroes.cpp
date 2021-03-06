#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int l, r;
        if (s.size()==1 || s.size()==2 || count(s.begin(), s.end(), '1')<=1) {
            cout << 0 << endl;
            continue;
        }
        for (int i=0; i<s.size(); i++) {
            if (s[i]=='1') {
                l = i;
                break;
            }
        }
        for (int i=s.size()-1; i>=0; i--) {
            if (s[i]=='1') {
                r = i;
                break;
            }
        }
        int count = 0;
        for (int i=l; i<=r; i++) {
            if (s[i]=='0')
                count++;
        }
        cout << count << endl;
    }

    return 0;
}