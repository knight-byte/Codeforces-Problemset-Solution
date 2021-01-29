#include <bits/stdc++.h>
using namespace std;

int main(void) {
    // variable declaration and input
    const int col = 2;
    int row;
    cin >> row;
    int arr[row][col];
    vector<int> sol;
    for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++) 
            cin >> arr[i][j];
    }

    // main logic
    for (int i=0; i<row; i++) {
        int a = arr[i][0], b = arr[i][1];
        int d = 0;
        if (a == b) {
            sol.push_back(0);
            continue;
        }
        else {
            d = abs(a-b);
            // The solution is d+9/10
            sol.push_back((d+9)/10); 
        }
    }

    /*
    // This works for small number of test cases, but fails on larger inputs
    for (int i=0; i<row; i++) {
        int a = arr[i][0], b = arr[i][1], counter = 0;
        if (a == b) {
            sol.push_back(counter);
            continue;
        }
        else {
            while (a != b) {
                if (a < b) {
                    if ((b-a) >= 10) {
                        a += 10;
                        counter++;
                    }
                    else if ((b-a) < 10) {
                        a += (b-a);
                        counter++;
                    }
                }
                else if (a > b) {
                    if ((a-b) >=10) {
                        b += 10;
                        counter++;
                    }
                    else if ((a-b) <= 10) {
                        b += (a-b);
                        counter++;
                    }
                }
            }
            sol.push_back(counter);
        }
    }
    */

    for (auto i=sol.begin(); i!=sol.end(); i++)
        cout << *i << endl;

    return 0;
}