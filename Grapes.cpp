#include <bits/stdc++.h>
using namespace std;

int main(void) {
    long long x, y, z, a, b, c;
    cin >> x >> y >> z >> a >> b >> c;
    bool ans = false;
    if (a>=x) {
        a -= x;
        long long dmitry = a+b;
        if (dmitry>=y) {
            dmitry -= y;
            long long michal = dmitry + c;
            if (michal>=z) 
                ans = true;
        }
    }
    if (ans)
        cout << "YES\n";
    else 
        cout << "NO\n";

    return 0;
}