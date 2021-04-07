#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        int minNum=min(b, c/2), ans=0;

        if (minNum>0) {
            ans += 3*minNum;
            b -= minNum;
        }

        minNum = min(a, b/2);
        if (minNum>0)
            ans += 3*minNum;
        
        cout << ans << endl;
    }

    return 0;
}