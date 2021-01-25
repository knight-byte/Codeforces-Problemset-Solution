#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    string str;
    cin >> str;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    set<char> s1;
    for (int i=0; i<n; i++) {
        s1.insert(str[i]);
    }
    if (s1.size() == 26)
        cout << "YES\n";
    else 
        cout << "NO\n";
        
    return 0;
}