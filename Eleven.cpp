#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<int> a(n+2);
    a[0] = 1;
    a[1] = 2;
    for (int i=2; i<n+2; i++) 
        a[i] = a[i-1] + a[i-2];
    string s;
    int j=0;
    for (int i=0; i<n; i++) {
        if (a[j] == i+1) {
            s += "O";
            j++;
        }
        else 
            s += "o";
    }
    cout << s << endl;

    return 0;
}