#include <bits/stdc++.h>
using namespace std;

int main(void) {
    // variable declaration and input
    int events;
    cin >> events;
    int arr[events];
    for (int i=0; i<events; i++) 
        cin >> arr[i];
    int police = 0, ans = 0;

    // main logic, stolen from tutorial, was too lazy to solve by myself.
    for (int i=0; i<events; i++) {
        if (arr[i] == -1) {
            if (!police)
                ans++;
            else
                police--;
        }
        else 
            police += arr[i];
    }

    // output
    cout << ans << endl;

    return 0;
}