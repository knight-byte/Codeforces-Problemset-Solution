#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string t, s;
    cin >> t >> s;
    reverse(s.begin(), s.end());
    if (t.compare(s) == 0)
        cout << "YES\n";
    else 
        cout << "NO\n";

    return 0;
}