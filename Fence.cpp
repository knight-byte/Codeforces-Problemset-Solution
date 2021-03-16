#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a>b)
            swap(a, b);
        if (b>c)
            swap(b, c);
        int d = max(1, c-a-b + 1);
        cout << d << endl;
    }
    return 0;
}