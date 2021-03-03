#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (auto &x:a)
        cin >> x;
    int count = 0;
    long long inc = 0;
    int maxCount = 0;
    for (int i=0; i<n; i++) {
        if (a[i]>inc) {
            count++;
            inc = a[i];
            if (count>maxCount)
                maxCount = count;
        }
        else {
            count = 1;
            inc = a[i];
        }
    }
    cout << maxCount << endl;

    return 0;
}