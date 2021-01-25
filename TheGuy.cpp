#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int totLevel;
    cin >> totLevel;
    int x, y;
    cin >> x;
    int arrX[x];
    for (int i=0; i<x; i++) 
        cin >> arrX[i];
    cin >> y;
    int arrY[y];
    for (int i=0; i<y; i++)
        cin >> arrY[i];
    set<int> s1;
    for (int i=0; i<x; i++) 
        s1.insert(arrX[i]);
    for (int i=0; i<y; i++)
        s1.insert(arrY[i]);
    if (s1.size() == totLevel)
        cout << "I become the guy.\n";
    else   
        cout << "Oh, my keyboard!\n";

    return 0;
}