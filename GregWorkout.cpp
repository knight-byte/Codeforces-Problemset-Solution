#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, z=1;
    cin >> n;
    int chest=0, bicep=0, back=0;
    for (int i=0; i<n; i++) {
        int x;
        cin >> x;
        if (z==1) {
            chest += x;
            z++;
        }
        else if (z==2) {
            bicep += x;
            z++;
        }
        else if (z==3) {
            back += x;
            z = 1;
        }
    }
    if (chest > bicep && chest > back)
        cout << "chest\n";
    else if (bicep > chest && bicep > back)
        cout << "biceps\n";
    else 
        cout << "back\n";

    return 0;
}