#include <bits/stdc++.h>
using namespace std;

int main(void) {
    long long n, k;
    cin >> n >> k;
    long long num = floor(n/k);
    if (num%2!=0)
        cout << "YES\n";
    else 
        cout << "NO\n";

    return 0;
}