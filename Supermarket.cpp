#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, m;
    cin >> n >> m;
    double lowest_price = 1000000;
    while (n--) {
        int a, b;
        cin >> a >> b;
        double price = (double)a/b * m;
        if (price < lowest_price)
            lowest_price = price;
    }
    // cout.precision(8);
    // cout << lowest_price << endl;
    printf("%7lf\n", lowest_price);

    return 0;
}