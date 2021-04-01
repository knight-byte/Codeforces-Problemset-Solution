#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    for (int i=0; i<n-1; i+=2) {
        if (s[i]=='a'&&s[i+1]=='a') {
            s[i] = 'b';
            count++;
        }
        else if (s[i]=='b' && s[i+1]=='b') {
            s[i] = 'a';
            count++;
        }
    }
    cout << count << endl;
    cout << s << endl;
    
    return 0;
}