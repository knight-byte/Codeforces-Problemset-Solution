#include <bits/stdc++.h>
using namespace std;

int main(void) {
    long long n, sum=0;
    cin >> n;
    sum = n*(n+1)/2;
    if (sum%2==1)
        cout << 1 << endl;
    else 
        cout << 0 << endl;
    return 0;
}