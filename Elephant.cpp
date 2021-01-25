#include <bits/stdc++.h>
using namespace std;

int stepsCounter(int coord) {
    int steps = 0;
    while (coord > 0) {
        coord -= 5;
        steps++;
    }
    return steps;
}

int main(void) {
    int coordinates;
    cin >> coordinates;
    int output = stepsCounter(coordinates);
    cout << output << endl;
    
    return 0;
}