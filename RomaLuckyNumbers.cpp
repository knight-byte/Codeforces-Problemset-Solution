#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, k, ans=0;
    cin >> n >> k;
    while (n--) {
        int cnt = 0;
        string s;
        cin >> s;
        for (int i=0; i<s.size(); i++) {
            if (s[i]=='4' || s[i]=='7')
                cnt++;
        }
        if (cnt <= k)
            ans++;
    }
    cout << ans << endl;

    return 0;
}