#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int matrix[5][5];
    const int reqPos = 12;
    int row, column;
    // Input 
    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1) {
                row = i+1;
                column = j+1;
            }
        }
    }
    int pos = 0;
    if (3-row < 0)
        row = -1*(3-row);
    else
        row = 3-row;
    if (3-column < 0)
        column = -1*(3-column);
    else 
        column = 3-column;
    pos = row + column;
    cout << pos << endl;

    return 0;
}