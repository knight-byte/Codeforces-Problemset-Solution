#include <bits/stdc++.h>
using namespace std;

int main(void) {
    double n, m, a;
    cin >> n >> m >> a;
    cout << (long long) ceil(m/a) * (long long) ceil(n/a) << endl;

    return 0;
}