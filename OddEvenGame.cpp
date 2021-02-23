#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    if (n==1)
        cout << "Ehab\n";
    else {
        if (n%2==0)
            cout << "Mahmoud\n";
        else 
            cout << "Ehab\n";
    }

    return 0;
}