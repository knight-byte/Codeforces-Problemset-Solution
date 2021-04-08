#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int x, y, z;
    cin >> x >> y >> z;
    int res = x-y;
    if (z==0) {
        if (res>0)
            cout << "+\n";
        else if (res<0)
            cout << "-\n";
        else 
            cout << "0\n";
    }
    else if (z>=abs(res))
        cout << "?\n";
    else if (z<abs(res)) {
        if (res>0)
            cout << "+\n";
        else 
            cout << "-\n";
    }
    else
        cout << "0\n";
    // tough one
    return 0;
}