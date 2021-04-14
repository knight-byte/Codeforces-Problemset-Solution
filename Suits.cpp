#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    long long money = 0;
    if (e>f) {
        int temp = min(a, d);
        money += temp*e;
        d -= temp;
        int temp2 = min(b, min(c, d));
        money += temp2*f;
    }
    else if (f>e) {
        int temp = min(b, min(c, d));
        money += temp*f;
        d -= temp;
        int temp2 = min(a, d);
        money += temp2*e;
    }
    else if (e==f) {
        if (a == b && b == c)
            money += d*e;
        else if (d<a || d<max(b, c))
            money += d*e;
        else {
            int temp1 = a;
            int temp2 = max(b, c);
            if (temp1>temp2)
                money += temp1*e;
            else 
                money += temp2*f;
        }
    }
    cout << money << endl;

    return 0;
}