// This runs correctly on my machine, but not on Codeforces
#include <bits/stdc++.h>
using namespace std;

bool isEven(long long int x) {
    if (x%2 == 0)
        return true;
    else
        return false;
}
int main(void) {
    long long int n;
    cin >> n;
    long int res = 0;
    if (isEven(n))
        res = n/2;
    else 
        res = (n-1)/2-n;
    cout << res << endl;

    return 0;
}