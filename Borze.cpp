#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string s1, s2;
    cin >> s1;
    for (int i=0; i<s1.size(); i++) {
        if (s1[i]=='.')
            s2.push_back('0');
        else if (s1[i]=='-' && s1[i+1]=='.') {
            s2.push_back('1');
            i++;
        }
        else if (s1[i]=='-' && s1[i+1]=='-') {
            s2.push_back('2');
            i++;
        }
    }
    cout << s2 << endl;

    return 0;
}