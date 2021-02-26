#include <bits/stdc++.h>
using namespace std;

int main(void) {
        string a, b, c, s;
        cin >> a >> b >> c;
        s = a+b;
        sort(s.begin(), s.end());
        sort(c.begin(), c.end());
        if (s==c)
            cout << "YES\n";
        else 
            cout << "NO\n";

    return 0;
}