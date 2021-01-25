#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int price, money, quantity, totalAmount=0;
    cin >> price >> money >> quantity;
    for (int i=1; i<=quantity; i++) {
        totalAmount += i*price;
    }
    if (totalAmount <= money) 
        cout << 0 << endl;
    else 
        cout << totalAmount - money << endl;
    return 0;
}