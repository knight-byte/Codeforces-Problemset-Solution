#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string s, t;
    cin >> s >> t;
    int cnt = 0;
    for (int i=0, j=0; i<t.size(); i++) {
        if (s[j]==t[i]) {
            cnt++;
            j++;
        }
    }
    cout << cnt+1 << endl;

    return 0;
}