#include <bits/stdc++.h>
using namespace std;

int gcd_sum(long long int x) {
    long long int temp=x, digit_sum=0;
    while (temp>0) {
        digit_sum += temp%10;
        temp /= 10;
    }
    long long int gcd = __gcd(x, digit_sum);
    
    return gcd;
}

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        if (gcd_sum(n) != 1)
            cout << n << endl;
        else if (gcd_sum(n+1) != 1)
            cout << n+1 << endl;
        else if (gcd_sum(n+2) != 1)
            cout << n+2 << endl;
    }

    return 0;
}