#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (count(s.begin(), s.end(), '0') == count(s.begin(), s.end(), '1')) {
        cout << 2 << endl;
        for (int i=0; i<n-1; i++)
            cout << s[i];
        cout << " " << s[n-1] << endl;
    }
    else 
        cout << 1 << endl << s << endl;

    return 0;
}