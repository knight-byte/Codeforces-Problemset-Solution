#include <bits/stdc++.h>
using namespace std;

int main(void) {
    const int len = 4;
    int arr[len];
    for (int i=0; i<len; i++)
        cin >> arr[i];
    string s;
    cin >> s;
    int tot = 0;
    for (int i=0; i<s.length(); i++) {
        int is = s[i] - '0';
        tot += arr[is-1];
    }
    cout << tot << endl;

    return 0;
}