#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    if (n%2==0)
        cout << pow(n, 2)/2 << endl;
    else 
        cout << (pow(n ,2)+1)/2 << endl;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (i%2!=0) {
                if (j%2!=0) 
                    cout << "C";
                else 
                    cout << ".";
            }
            else {
                if (j%2!=0)
                    cout << ".";
                else 
                    cout << "C";
            }
        }
        cout << endl;
    }

    return 0;
}