#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    vector<string> ans;
    while (t>0) {
        for (int i=0; i<n-1; i++) {
            if (s[i]=='B' && s[i+1]=='G') {
                swap(s[i], s[i+1]);
                i++;
            }
        }
        t--;
    }
    cout << s << endl;

    return 0;
}