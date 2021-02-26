#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        string a;
        cin >> a;
        string b = a.substr(0, 2);
        for (int i=3; i<a.size(); i+=2)
            b += a[i];
        cout << b << endl;
    }

    return 0;
}