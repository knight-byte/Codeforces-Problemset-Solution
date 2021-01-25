#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    int arr[n][2];
    for (int i=0; i<n; i++) {
        for (int j=0; j<2; j++) {
           cin >> arr[i][j];
       }
    }
    int res = 0;
    int ans[n];
    for (int i=0; i<n; i++) {
        ans[i] = arr[i][0] - arr[i][1];
        if (ans[i] < 0) 
            ans[i] = ans[i] * (-1);
    }
    for (int i=0; i<n; i++) {
        if (ans[i] >= 2)
            res++;
    }
    cout << res << endl;

    return 0;
}