#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    int steps = 0;
    for (int i=0; i<n; i++) {
        int i1 = s1[i] - '0';
        int i2 = s2[i] - '0';
        int diff = abs(i1-i2);
        if (diff<5)
            steps += diff;
        else 
            steps += (10-diff);
    }
    cout << steps << endl;

    return 0;
}