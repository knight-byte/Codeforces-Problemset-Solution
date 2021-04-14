#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        long long s, a, b, c;
        cin >> s >> a >> b >> c;
        long long cnt, x, add;
        cnt = s/c;
        x = cnt/a;
        add = x*b;
        cout << add+cnt << endl;        
    }

    return 0;
}