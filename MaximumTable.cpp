#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    int arr[n][n]; // required matrix
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (i==0 || j==0) {
                arr[i][j] = 1; // All elements of 1st row are 1
            }
            else {
                // required num = element to the left + element above it
                arr[i][j] = arr[i-1][j] + arr[i][j-1];
            }
        }
    }
    // displaying last element as it is the final sum
    cout << arr[n-1][n-1] << endl;

    return 0;
}