#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int a, b;
    cin >> a >> b;
    int l=0, r=0, draw=0;
    for (int i=1; i<=6; i++) {
        if (abs(a-i)<abs(b-i))
            l++;
        else if (abs(a-i)==abs(b-i))
            draw++;
        else 
            r++;
    }
    cout << l << " " << draw << " " << r << endl;

    return 0;
}