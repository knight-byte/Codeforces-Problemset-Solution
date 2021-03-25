#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int y, b, r;
    cin >> y >> b >> r;
    y += 2;
    b += 1;
    cout << min(y, min(b, r))*3 - 3 << endl;

    return 0;
}