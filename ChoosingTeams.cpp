#include <bits/stdc++.h>
using namespace std;

int main(void) {
    // vaariable declaration and input
    int n, k, total=0;
    cin >> n >> k;
    while (n--) {
        int temp;
        cin >> temp;
        if (5-temp>=k) 
            total++;
    }
    int answer = total/3;

    // output and return 0
    cout << answer << endl;
    return 0;
}