#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++) 
        cin >> arr[i];
    int total = 0;
    for (int i=0; i<n; i++) 
        total += arr[i];
    double res = 0.0;
    double div = n;
    res = total / div;
    cout << res << endl;

    return 0;
}