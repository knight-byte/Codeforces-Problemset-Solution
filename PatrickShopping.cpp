#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int d1, d2, d3;
    cin >> d1 >> d2 >> d3;
    int dist = 0;
    dist = min(d1, d3+d2) + min(d2, d1+d3) + min(d3, d1+d2);
    cout << dist << endl;
    
    return 0;
}