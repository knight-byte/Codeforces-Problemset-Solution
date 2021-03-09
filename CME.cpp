#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int q;
    cin >> q;
    for (int i=0; i<q; i++) {
        int temp;
        cin >> temp;
        if (temp==2)
            cout << 2 << endl;
        else if (temp%2==1)
            cout << 1 << endl;
        else if (temp%2==0)
            cout << 0 << endl;
    }
    return 0;
}