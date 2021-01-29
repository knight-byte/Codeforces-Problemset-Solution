#include <bits/stdc++.h>
using namespace std;

int main(void) {
    //variable declaration and input
    int price, denomination;
    cin >> price >> denomination;
    
    // main logic
    for (int x=1; x<10; x++) {
        // got this from tutorial
        if (price*x%10==0 || price*x%10==denomination) {
            cout << x << endl;
            break;
        }
    }

    return 0;
}