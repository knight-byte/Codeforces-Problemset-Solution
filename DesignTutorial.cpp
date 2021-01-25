#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int num;
    cin >> num;
    int res[2];
    if (num%2 == 0) {
        res[0] = 8;
        res[1] = num - 8;
    }
    else {
        res[0] = 9;
        res[1] = num - 9;
    }
    for (int i=0; i<2; i++) 
        cout << res[i] << " ";
    cout << endl;
    
    return 0;
}