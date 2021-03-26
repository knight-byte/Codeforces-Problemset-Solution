#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string s;
    cin >> s;
    int a = count(s.begin(), s.end(), 'a');
    if (a>s.size()/2)
        cout << s.size() << endl;
    else {
        cout << a*2 - 1 << endl;
    }

    return 0;
}