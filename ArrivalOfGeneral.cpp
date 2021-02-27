#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    int maxIndex=0, minIndex=0, maxValue=0, minValue=1000;
    for (int i=0; i<n; i++) {
        int x;
        cin >> x;
        if (x>maxValue) {
            maxValue = x;
            maxIndex = i;
        }
        if (x<=minValue) {
            minValue = x;
            minIndex = i;
        }
    }
    if (maxIndex > minIndex)
        cout << (maxIndex-1) + (n-minIndex) - 1 << endl;
    else 
        cout << (maxIndex-1) + (n-minIndex) << endl;

    return 0;
}