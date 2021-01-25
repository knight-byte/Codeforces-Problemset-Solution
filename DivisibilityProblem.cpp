#include <bits/stdc++.h>
using namespace std;

int solution(int a, int b) {
    int res = 0;
    if (a%b == 0) 
        return 0;
    else if (a%b != 0) {
        res = b - a%b;
    }
    return res;
}

int main(void) {
    const int col = 2;
    int row;
    cin >> row;
    int arr[row][col];
    for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++) 
            cin >> arr[i][j];
    }
    int sol[row];
    for (int i=0; i<row; i++) 
        sol[i] = solution(arr[i][0], arr[i][1]);
    for (int i=0; i<row; i++)
        cout << sol[i] << endl;

    return 0;
}