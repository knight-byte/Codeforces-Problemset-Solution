#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int x;
    cin >> x;
    int remain = x%4;
    if (remain == 1)    
        cout << 0 << " " << "A\n";
    else if (remain == 3)
        cout << 2 << " " << "A\n";
    else if (remain == 2) 
        cout << 1 << " " << "B\n";
    else if (remain == 0)
        cout << 1 << " " << "A\n";

    return 0;
}