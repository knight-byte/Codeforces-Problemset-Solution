#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int k, l, m, n;
    long long d;
    set<long long> damaged;
    cin >> k >> l >> m >> n >> d;
    if (d<k || d<l || d<m || d<n)
        cout << 0 << endl;
    else if (k==1)
        cout << d << endl;
    else {
        for (long long i=1; i<=d; i++) {
            if (i%k==0) {
                damaged.insert(i);
                continue;
            }
            else if (i%l==0) {
                damaged.insert(i);
                continue;
            }
            else if (i%m==0) {
                damaged.insert(i);
                continue;
            }
            else if (i%n==0) {
                damaged.insert(i);
                continue;
            }
        }
        cout << damaged.size() << endl;
    }
    return 0;
}