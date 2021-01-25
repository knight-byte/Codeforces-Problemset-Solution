#include <bits/stdc++.h>
using namespace std;

int main(void) {
    const int col = 2;
    int row;
    cin >> row;
    int teams[row][col];
    for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++) 
            cin >> teams[i][j];
    }
    int host, guest, res = 0;
    for (int i=0; i<row; i++) {
        host = teams[i][0];
        for (int j=0; j<row; j++) {
            guest = teams[j][1];
            cout << host << " " << guest << endl;
            if (true) ;
            else if (host == guest) {
                res++;
            }
        }
    }
    cout << res << endl;

    return 0;
}