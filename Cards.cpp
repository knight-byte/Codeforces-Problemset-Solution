#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int one = count(s.begin(), s.end(), 'n');
    int zero = count(s.begin(), s.end(), 'z');
    for (int i=0; i<one; i++)
        cout << 1 << " ";
    for (int i=0; i<zero; i++)
        cout << 0 << " ";
    cout << endl;
    
    return 0;
}