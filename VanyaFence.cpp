#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, height;
    cin >> n >> height;
    int people[n];
    for (int i=0; i<n; i++) 
        cin >> people[i];
    int counter = 0;
    for (int i=0; i<n; i++) {
        if (people[i] > height)
            counter++;
    }
    int res = ((n-counter)*1) + (counter*2);
    cout << res << endl;

    return 0;
}