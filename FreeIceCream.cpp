#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, x;
    cin >> n >> x;
    long long iceCream=x, kids=0;
    for (int i=0; i<n; i++) {
        char sign;
        cin >> sign;
        long long ic;
        cin >> ic;
        if (sign=='+') 
            iceCream += ic;
        else if (sign=='-' && iceCream>=ic)
            iceCream -= ic;
        else if (sign=='-' && iceCream<ic) 
            kids++;
    }
    cout << iceCream << " " << kids << endl;

    return 0;
}