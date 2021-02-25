#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    int arr[n];
    int sol[n];
    for (int i=0; i<n; i++)
        cin >> arr[i];
    for (int i=0; i<n; i++)
        sol[arr[i]-1] = i+1;
    for (int i=0; i<n; i++)
        cout << sol[i] << " ";
    cout << endl;
    
    return 0;
}