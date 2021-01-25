#include <bits/stdc++.h>
using namespace std;

int main(void) {
    const int col = 2;
    const int totalMin = 1440;
    int row;
    cin >> row;
    int arr[row][col];
    for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++)
            cin >> arr[i][j];
    }
    int res[row];
    for (int i=0; i<row; i++) {
        res[i] = totalMin - (arr[i][0]*60 + arr[i][1]);
    }
    for (int i=0; i<row; i++)
        cout << res[i] << endl;

    return 0;
}