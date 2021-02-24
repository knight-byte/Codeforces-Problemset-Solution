#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string s;
    cin >> s;
    int count = 0;
    for (int i=0; i<s.size(); i++) {
        if (s[i]=='7' || s[i]=='4')
            count++; 
    }
    if (count==4 || count==7)
        cout << "YES\n";
    else 
        cout << "NO\n";

    return 0;
}