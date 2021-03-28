#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int s_len = s.size();
        if (s[s_len-1] == 'o')
            cout << "FILIPINO\n";
        else if (s[s_len-1] == 'u')
            cout << "JAPANESE\n";
        else 
            cout << "KOREAN\n";
    }

    return 0;
}